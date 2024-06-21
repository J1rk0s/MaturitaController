[library]: https://github.com/adafruit/Adafruit_MPU6050

# Nodemcu ESP8266 controller for unity
## About
* The controller uses Adafruit MPU6050 [library] to comunicate with the onboard MPU6050 sensor

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

## Building the firmware
### Using VS Code [PlatformIO] (RECOMENDED)
* Download the firmware repository
* Open the downloaded repository in PlatformIO
* Press compile in the bottom tray (Icon looks like a checkmark)
* Once the code has been compiled, you can press the upload button (Icon looks like an arrow pointing right)
* Once uploaded, you can enjoy your new controller

## Prototype
![prototype](./images/prototype.png)
