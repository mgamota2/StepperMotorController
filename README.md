# Stepper Motor Controller

## Purpose

This project was designed for the EV Concept Car team to enable autonomous steering. Stepper motors provide precise rotation and high torque, making them perfect for turning a steering wheel.

## Design

This project is a 48V isolated stepper motor controller which can be controlled over CAN or USB. The MCU used for this project is the STM32F103C8T6. The foundational part of the design are the 2 isolated H-Bridge circuits which drive the two coils in the stepper motor. The PCB files, gerbers, and BOM are included in this repo.

## Sources

Thank you to Nefastor Online for the COM over USB library for the STM32F1:
https://nefastor.com/microcontrollers/stm32/usb/stm32cube-usb-device-library/cdc-continued/
https://github.com/Nefastor-Online/STM32_VCP.git


## Report

