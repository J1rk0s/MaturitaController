# Nodemcu ESP8266 controller for unity
## Parts
* Nodemcu ESP8266 or similar
* MPU6050 Accelerometer and Gyroscope or similar
* Joystick
* (OPTIONAL) RGB led

## Connections
MCU (D1) -> MPU6050 (SCL) <br>
MCU (D2) -> MPU6050 (SDA) <br>
MCU (3V3) -> MPU6050 (VCC) and JOYSTICK (5V) <br>
MCU (GND) -> MPU6050 (GND) and JOYSTICK (GND) <br>
MCU (A0) -> JOYSTICK (VRX)

### Optional
MCU (D5) -> RGB_LED (RED) <br>
MCU (D6) -> RGB_LED (GREEN) <br>
MCU (GND) -> RGB_LED (GND) <br>

## Prototype
![prototype](./images/prototype.png)
