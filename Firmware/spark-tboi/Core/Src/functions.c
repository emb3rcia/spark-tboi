//
// Created by ember on 15.03.2026.
//

#include "functions.h"


int32_t last_cnt = 0;
int32_t fire_delay = 0;
int32_t debounce = 0;
int32_t fire_mode = 0;
int32_t last_fired = 0;
int32_t was_fired_delay_variable = 0;
bool was_fired = false;
bool should_fire = false;


void handleEncoder()
{
	//made myself but fixed by ai eg the delta limits handling
    old_fire_rate = fire_rate;
	int32_t cnt = __HAL_TIM_GET_COUNTER(&htim2);
    int32_t delta = cnt - last_cnt;
    if (delta > 32767) delta -= 65536;
    if (delta < -32768) delta += 65536;
    last_cnt = cnt;

    fire_rate += delta;

	if (fire_rate < 0) fire_rate = 0;

	if (old_fire_rate != fire_rate) updateOLED();

    bool push_pressed = (HAL_GPIO_ReadPin(GPIOB, ENCODER_SWITCH_Pin) == GPIO_PIN_RESET);

    if (push_pressed)
    {
        if (debounce >= 10)
        {
            debounce = 0;
            if (fire_mode <= 1) fire_mode += 1; else fire_mode = 0;
			updateOLED();
        }
    }
    else
    {
        if (debounce < 10) debounce += 1;
    }
}

void updateOLED() {
	char fire_delay_string[20];
	char mode_string[20];

	sprintf(fire_delay_string, "Fire delay: %d ms", fire_rate);

	switch(fire_mode) {
		case 0:
			sprintf(mode_string, "Fire mode: Normal");
			break;
		case 1:
			sprintf(mode_string, "Fire mode: SSword");
    		break;
		case 2:
    		sprintf(mode_string, "Fire mode: CMilk");
			break;
		default:
			sprintf(mode_string, "Fire mode: Normal");
			fire_mode = 0;
    		break;
	}

	ssd1306_SetCursor(5, 5);
	ssd1306_WriteString(fire_delay_string, Font_6x8, White);
	ssd1306_SetCursor(5, 15);
	ssd1306_WriteString(mode_string, Font_6x8, White);
	ssd1306_UpdateScreen();
}

uint16_t handleDescriptor()
{
    uint16_t report = 0;
	//normal function keys
    if (HAL_GPIO_ReadPin(GPIOB, SW1_Pin) == GPIO_PIN_RESET) report |= (1 << 0);
    if (HAL_GPIO_ReadPin(GPIOB, SW2_Pin) == GPIO_PIN_RESET) report |= (1 << 1);
    if (HAL_GPIO_ReadPin(GPIOB, SW3_Pin) == GPIO_PIN_RESET) report |= (1 << 2);
    if (HAL_GPIO_ReadPin(GPIOB, SW4_Pin) == GPIO_PIN_RESET) report |= (1 << 3);
    if (HAL_GPIO_ReadPin(GPIOB, SW5_Pin) == GPIO_PIN_RESET) report |= (1 << 4);
    if (HAL_GPIO_ReadPin(GPIOB, SW6_Pin) == GPIO_PIN_RESET) report |= (1 << 5);
    if (HAL_GPIO_ReadPin(GPIOB, SW7_Pin) == GPIO_PIN_RESET) report |= (1 << 6);
    if (HAL_GPIO_ReadPin(GPIOB, SW8_Pin) == GPIO_PIN_RESET) report |= (1 << 7);
    if (HAL_GPIO_ReadPin(GPIOB, SW9_Pin) == GPIO_PIN_RESET) report |= (1 << 8);
    if (HAL_GPIO_ReadPin(GPIOB, SW10_Pin) == GPIO_PIN_RESET) report |= (1 << 9);
    if (HAL_GPIO_ReadPin(GPIOB, SW12_Pin) == GPIO_PIN_RESET) report |= (1 << 10);

	// arrow keys
	if (fire_mode == 0)
	{
		if (HAL_GPIO_ReadPin(GPIOB, SW11_Pin) == GPIO_PIN_RESET) report |= (1 << 11);
    	if (HAL_GPIO_ReadPin(GPIOB, SW13_Pin) == GPIO_PIN_RESET) report |= (1 << 12);
    	if (HAL_GPIO_ReadPin(GPIOB, SW14_Pin) == GPIO_PIN_RESET) report |= (1 << 13);
    	if (HAL_GPIO_ReadPin(GPIOB, SW15_Pin) == GPIO_PIN_RESET) report |= (1 << 14);

		return report;
	}
	else if (fire_mode == 1)
	{
		uint32_t now = HAL_GetTick();
		if (now - was_fired_delay_variable >= 1)
		{
    		was_fired = !was_fired;
    		was_fired_delay_variable = now;
		}

		if (HAL_GPIO_ReadPin(GPIOB, SW11_Pin) == GPIO_PIN_RESET && !was_fired) report |= (1 << 11);
		if (HAL_GPIO_ReadPin(GPIOB, SW13_Pin) == GPIO_PIN_RESET && !was_fired) report |= (1 << 12);
		if (HAL_GPIO_ReadPin(GPIOB, SW14_Pin) == GPIO_PIN_RESET && !was_fired) report |= (1 << 13);
		if (HAL_GPIO_ReadPin(GPIOB, SW15_Pin) == GPIO_PIN_RESET && !was_fired) report |= (1 << 14);

		return report;
	}
	else if (fire_mode == 2)
	{
		uint32_t now = HAL_GetTick();
		if (now - last_fired >= fire_delay)
		{
    		should_fire = true;
    		last_fired = now;
		}
		else
		{
  			should_fire = false;
		}

		if (HAL_GPIO_ReadPin(GPIOB, SW11_Pin) == GPIO_PIN_RESET && should_fire) report |= (1 << 11);
		if (HAL_GPIO_ReadPin(GPIOB, SW13_Pin) == GPIO_PIN_RESET && should_fire) report |= (1 << 12);
		if (HAL_GPIO_ReadPin(GPIOB, SW14_Pin) == GPIO_PIN_RESET && should_fire) report |= (1 << 13);
		if (HAL_GPIO_ReadPin(GPIOB, SW15_Pin) == GPIO_PIN_RESET && should_fire) report |= (1 << 14);

		return report;
	}
	else {
		fire_mode = 0;

		if (HAL_GPIO_ReadPin(GPIOB, SW11_Pin) == GPIO_PIN_RESET) report |= (1 << 11);
    	if (HAL_GPIO_ReadPin(GPIOB, SW13_Pin) == GPIO_PIN_RESET) report |= (1 << 12);
    	if (HAL_GPIO_ReadPin(GPIOB, SW14_Pin) == GPIO_PIN_RESET) report |= (1 << 13);
    	if (HAL_GPIO_ReadPin(GPIOB, SW15_Pin) == GPIO_PIN_RESET) report |= (1 << 14);

		return report;
	}
}