# samd21-uuid
A simple Arduino program to read the 128 bit Unique Serial Number (UUID) of SAMD21 microcontrollers (compatible with microchip studio)

## Serial Monitor Output
![samd21_uuid_serialmonitor](https://user-images.githubusercontent.com/14924063/214277077-fbee1ca0-63ab-4b5d-90e6-cb5225cd4576.png)

## Reference
https://microchipsupport.force.com/s/article/Reading-unique-serial-number-on-SAM-D20-SAM-D21-SAM-R21-devices

## Atmel SAMD ARM Microcontroller

Each device has a unique 128-bit serial number which is a concatenation of four 32-bit words contained at the following addresses: 

| - | SAMD21 |
| :-------: | :------: |
| Word 0| 0x0080A00C |
| Word 1| 0x0080A040 |
| Word 2| 0x0080A044 |
| Word 3| 0x0080A048 |

The uniqueness of the serial number is guaranteed only when using all 128 bits. 

## Tested Microcontroller

* Atmel SAMD21 ARM Cortex-M0 (Arduino Zero / Arduino M0) - 16 bytes - [Datasheet Section 9.3.3](https://cdn.sparkfun.com/datasheets/Dev/Arduino/Boards/Atmel-42181-SAM-D21_Datasheet.pdf)
* Tested on ATSAMD21E18 Microcontroller based custom breakout board.
