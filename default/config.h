/*
    Copyright 2016 fishpepper <AT> gmail.com

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    author: fishpepper <AT> gmail.com
*/
#ifndef DEFAULT_CONFIG_CONFIG_H_
#define DEFAULT_CONFIG_CONFIG_H_

// use defaults
#define BOOTLOADER_LED_GREEN_PORT P2
#define BOOTLOADER_LED_GREEN_PIN  4
#define BOOTLOADER_LED_RED_PORT P2
#define BOOTLOADER_LED_RED_PIN  3
 
#define BOOTLOADER_UART_NUM  1
#define BOOTLOADER_UART_PORT 0
#define BOOTLOADER_UART_INVERTED 0
#define BOOTLOADER_UART_BAUDRATE 57600
#define BOOTLOADER_UART_USE_PARITY 0

// use ISP interface clock pin as bootloader enable pin
// pull this low during startup to enter bootloader mode
#define BOOTLOADER_ENABLE_PORT P2
#define BOOTLOADER_ENABLE_PIN  2

#endif  // DEFAULT_CONFIG_CONFIG_H_
