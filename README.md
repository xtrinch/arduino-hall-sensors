# Linear hall sensor

## About

Linear hall sensor detects the presence of static magnetic fields. 0V signal output on magnetic field present, ~3.6V when no magnetic field present. Program flashes onboard Arduino LED attached to pin 13 less frequently when no magnetic fields are present.

## Components

- Arduino uno
- 44E938 Linear hall sensor (sensor module with built in resistor + indicator LED)

## Connections

### Linear hall sensor module
- S to A5 (analog in) of Arduino
- &minus; to GND
- &plus; to 5V

## Result

![](https://github.com/xtrinch/arduino-hall-sensors/blob/master/linear-hall/result.jpg)


# Switch hall sensor

## About

Switch hall sensor is the digital version of linear hall. Consists of voltage regulator, hall element, differential amplifier & Schmitt trigger. Outputs 0 when a magnetic field is present. Upon presence, buzzer is then activated at a random frequency.

## Components

- Arduino uno
- Switch hall sensor (sensor module with built in resistor + indicator LED)

## Connections
- S of switch hall to pin 5 of Arduino
- &minus; to GND
- &plus; to 5V
- Buzzer S to pin 7

## Result

![](https://github.com/xtrinch/arduino-hall-sensors/blob/master/switch-hall/result.jpg)

## Linear hall sensor with comparator

## About

Linear hall with comparator can output analog & digital values.

## Components

- Arduino uno
- Linear hall with comparator sensor module
- Potentiometer
- LCD1602

## Connections

- AO of sensor module to A0 of arduino
- DO of sensor module to digital 8 of arduino
- &minus; of sensor module to GND
- &plus; of sensor module to 5V
- RS of LCD1602 to digital pin 3
- R/W of LCD1602 to GND
- E of LCD1602 to digital pin 4
- D4-D7 of LCD1602 to digital pin 9 to 12
- VSS of LCD1602 to GND
- VDD of LCD1602 to 5V
- A of LCD1602 to 3.3V
- K of LCD1602 to GND
- VO of LCD1602 to middle pin of potentiometer
- any other pin of potentiometer to GND

## Result

![](https://github.com/xtrinch/arduino-hall-sensors/blob/master/linear-hall-with-comparator/result1.jpg)
![](https://github.com/xtrinch/arduino-hall-sensors/blob/master/linear-hall-with-comparator/result2.jpg)