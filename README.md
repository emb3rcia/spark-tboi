# spark-tboi
# Navigation
- [About project](#about-project)
  - [Motivation for the project](#motivation-for-the-project)
  - [Humorous additions](#humorous-additions)
  - [Pin tables](#pin-tables)
  - [Development tools](#development-tools)
  - [Features](#features)
- [Images](#images)
- [License](#license)

# About project

spark-tboi is small-footprint keyboard/macropad with autoclicking capabilities and hot-swappable switches for The Binding of Isaac: Repentance+

## Motivation for the project

spark-debug was created to reduce strain on arms that happens when spam-clicking arrow keys with items such as Spirit Sword or Chocolate Milk

## Humorous additions

I added humorous silkscreen text as this project lacks personality without them in my opinion.

## Pin tables

Pin tables on PCB's silkscreen are named based on IC pins, not on desired connection on it. This means that TX UART pin should be plugged to RX of debugged device and vice versa.

## Usage

spark-tboi can run either only with firmware only or with integration with TBoI via mod that will be made after building the device.

## Directory overview

- 3D file of PCB and case files are available in `/3D`
- KiCad project files are available in `/KiCad Project Files`
- Gerber files are available in `/Gerbers`
- Firmware files are available in `/Firmware`

## Development tools

- KiCad for EDA work
- STM32CubeMX and CLion for firmware
- Fusion Educational Edition for CAD work

## Features

- Small footprint
- Autoclicking capabilities for specific items
- OLED screen

# Images

Schematic

![schematic](/Images/Schematic.png)

3D viewer top side

![3d top side](/Images/Top.png)

3D viewer bottom side

![3d bottom side](/Images/Bottom.png)

Case assembled

![case assembled](/Images/Case.png)

Top plate

![top plate](/Images/Top-Plate.png)

Bottom case

![bottom case](/Images/Bottom-Case.png)

# License

## PCB / Schematic License

All files in `/PCB`, `/Schematic` and `/Gerbers` folders and their subsequent subfolders are licensed under the CERN Open Hardware License v2 (Weakly Reciprocal).

See `/Licenses/CERN-OHL.txt` for full terms.

## 3D files, images and documentation License

All files in `/3D`, `/Images` folders and their subsequent subfolders are licensed under the CC-BY 4.0 License.

See `/Licenses/CC-BY-4.0.txt` for full terms

## Software License

All files in `/Firmware` folder and their subsequent subfolders are licensed under the Apache 2.0 License.

See `/Licenses/Apache-2.0.txt` for full terms.

# BOM

|Name                          |Purpose                                                          |Quantity|Total Cost (USD)|Link                                                                                                 |Distributor|
|------------------------------|-----------------------------------------------------------------|--------|----------------|-----------------------------------------------------------------------------------------------------|-----------|
|GRM1555C1H180JA01D            |Capacitors for crystal                                           |2       |0.22            |https://www.tme.eu/pl/details/grm1555c1h180ja01d/kondensatory-mlcc-smd/murata/                       |TME        |
|0603B103K500CT                |Decoupling capacitors for MCU                                    |4       |0.27            |https://www.tme.eu/pl/en/details/0603b103k500ct/mlcc-smd-capacitors/walsin/                          |TME        |
|ABMM2-8.000MHZ-E2-T           |8 MHz oscillator for USB FS                                      |1       |1.03            |https://www.tme.eu/pl/en/details/abmm2-8.000mhz-e2/smd-quartz-generators/abracon/abmm2-8-000mhz-e2-t/|TME        |
|Outemu Kailh CPG151101S11     |Hot-swap switches (i have them from other project)               |15      |0.00            |https://pl.aliexpress.com/item/1005002637150446.html?gatewayAdapt=glo2pol                            |AliExpress |
|Switches and keycaps          |Physical buttons (i have them from hackpad kit and other project)|15      |0.00            |                                                                                                     |HackClub   |
|FOJAN FRC0603J472 TS          |Pull up/down resistors (i have them from other project)          |3       |0.00            |https://www.lcsc.com/product-detail/C2907166.html                                                    |LCSC       |
|Samsung Electro-Mechanics     |10uf decoupling capacitor (i have them from other project)       |1       |0.00            |https://www.lcsc.com/product-detail/C19702.html                                                      |LCSC       |
|HRE CGA0603X7R104K500JT       |100nf decoupling capacitors (i have them from other project)     |2       |0.00            |https://www.lcsc.com/product-detail/C6119867.html                                                    |LCSC       |
|Littelfuse SMBJ5.0A           |TVS diode for vbus (i have it from different project)            |1       |0.00            |https://www.lcsc.com/product-detail/C83333.html                                                      |LSCS       |
|Alps EC11                     |Rotary Encoder leftover from hackpad kit                         |1       |0.00            |                                                                                                     |HackClub   |
|SSD1306                       |OLED 128x32 SSD1306 screen leftover from hackpad kit             |1       |0.00            |                                                                                                     |HackClub   |
|SHOU HAN TYPE-C 16PIN 2MD(073)|USB-C Port (i have it from other project)                        |1       |0.00            |https://www.lcsc.com/product-detail/C2765186.html?s_z=n_C2765186                                     |LCSC       |
|PCB                           |PCB                                                              |5       |32.50           |https://jlcpcb.com                                                                                   |JLCPCB     |
|ST STM32F103C8T7              |MCU                                                              |1       |7.00            |https://www.tme.eu/pl/details/stm32f103c8t7/mikrokontrolery-st/stmicroelectronics/                   |TME        |


© 2026 emb3rcia

Hardware: CERN OHL v2
3D & Images: CC BY 4.0
Firmware: Apache 2.0
