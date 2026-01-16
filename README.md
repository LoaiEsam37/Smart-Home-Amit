# Task: Smart Home Temperature LED Module

## Author

Loai Esam  
Created: Jan 16, 2026

---

## Task Overview

This task implements the **temperature monitoring module** for the team’s Smart Home project.

It reads the temperature from an **LM35 sensor** using the microcontroller’s **ADC** and indicates the temperature range by lighting up **LEDs**:

- LED1 → Cold (< 25°C)
- LED2 → Warm (25°C – 49°C)
- LED3 → Hot (50°C – 74°C)
- LED4 → Very Hot (≥ 75°C)

This module is intended to be integrated with other modules in the team project.

---

## Files Implemented

- `Smart_Home.c` → Main logic for reading temperature and controlling LEDs
- `LM35_interface.h` / `LM35_program.c` → LM35 sensor driver
- `ADC_interface.h` / `ADC_program.c` → ADC driver
- `DIO_interface.h` / `DIO_program.c` → Digital I/O driver
- `BIT_MATH.h`, `STD_TYPES.h` → Supporting macros and type definitions

---

## Usage

1. Connect LM35 to ADC channel 1 (PA1).
2. Connect LEDs to PORTC pins PC1–PC4 with resistors.
3. Compile and flash the code to the AVR microcontroller.
4. LEDs indicate temperature ranges for the task module.

---

## Notes

- ADC reference is **AVCC (5V)**. Ensure LM35 conversion math is consistent.
- LM35 driver includes error return codes for invalid pointers or channels.
- Polling method is used for ADC; no interrupts.

---

## Purpose

This task is meant to provide a working temperature-to-LED module for integration into the larger Smart Home team project.
