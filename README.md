ESP32 Cyclic IR Sensor LED Controller
This project demonstrates an ESP32 microcontroller controlling an LED based on an IR sensor, following a repeating timed cycle.

Overview
The ESP32 runs in continuous cycles. Each cycle starts with an "Execution Started" message. For the next 10 seconds, the IR sensor actively controls an LED (turning it ON when an object is detected, and OFF when clear). After 10 seconds, an "Execution Ended" message is printed, and the cycle immediately restarts.

How it Works
Cycle Start: The program prints "Execution Started...".

Sensor Active (10s): For the next 10 seconds, the IR sensor's input is continuously monitored via an Interrupt Service Routine (ISR).

If the IR sensor detects an object, the LED turns ON.

If no object is detected, the LED turns OFF.

Cycle End: After 10 seconds, the sensor's control is paused (interrupt detached), the LED is turned off, and "Execution Ended" is printed.

Repeat: The entire process then loops, restarting from "Execution Started...".
