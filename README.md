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

|Name                   |Purpose                                            |Cost per unit|Amount|Total cost|Link                                                                 |Distributor|
|-----------------------|---------------------------------------------------|-------------|------|----------|---------------------------------------------------------------------|-----------|
|PCB                    |PCB (5 is minimal order)                           |6.50 USD     |5     |32.50 USD |https://jlcpcb.com                                                   |JLCPCB     |
|YAGEO CC0603KRX7R9BB103|Decoupling capacitor for MCU (100 is minimal order)|0.0023 USD   |100   |0.23 USD  |https://www.lcsc.com/product-detail/C100042.html                     |LCSC       |
|JLYE Y32258MNCCZ       |8Mhz oscillator for USB FS (5 is minimal order)    |0.32 USD     |5     |1.60 US   |Dhttps://www.lcsc.com/product-detail/C49207813.html                  |LCSC       |
|ST STM32F103C8T7       |MCU                                                |4.27 USD     |1     |4.27 USD  |https://www.lcsc.com/product-detail/C1121900.html?s_z=n_STM32F103C8T7|LCSC       |


© 2026 emb3rcia

Hardware: CERN OHL v2
3D & Images: CC BY 4.0
Firmware: Apache 2.0
