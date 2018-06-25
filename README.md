# Linear hall sensor with arduino

## About

Linear hall sensor detects the presence of magnetic fields. 0V signal output on magnetic field present, ~3.6V when no magnetic field present. Program flashes onboard Arduino LED attached to pin 13 less frequently when no magnetic fields are present.

## Components

- Arduino uno
- 44E938 Linear hall sensor (sensor module with built in resistor + indicator LED)

## Connections

### Linear hall sensor module
- S to A5 (analog in) of Arduino
- - to GND
- + to 5V

## Result

![](https://raw.githubusercontent.com/xTrinch/arduino-linear-hall-sensor/master/result.jpg)
