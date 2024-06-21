[PlatformIO]: https://platformio.org/

# STM32 black pill controller for unity
## Parts
* STM32 black pill or similar mcu that supports usb cdc
* MPU6050 Accelerometer and Gyroscope or similar
* Joystick
* (OPTIONAL) RGB led

## Connections
* MCU (B6) -> MPU6050 (SCL) <br>
* MCU (B7) -> MPU6050 (SDA) <br>
* MCU (3V3) -> MPU6050 (VCC) and JOYSTICK (5V) <br>
* MCU (GND) -> MPU6050 (GND) and JOYSTICK (GND) <br>
* MCU (A0) -> JOYSTICK (VRX)
* MCU (A1) -> JOYSTICK (VRY)

### Optional
* MCU (B3) -> RGB_LED (RED) <br>
* MCU (B4) -> RGB_LED (GREEN) <br>
* MCU (GND) -> RGB_LED (GND) <br>

## Flashing
1) Connect your programmer to the swd pins on your stm32 controller
2) Flash the provided firmware using any flashing program that you like
3) Enjoy your new controller

## Building the firmware
### Using VS Code [PlatformIO] (RECOMENDED)
* Download the firmware repository
* Open the downloaded repository in PlatformIO
* Press compile in the bottom tray (Icon looks like a checkmark)
* Once the code has been compiled, you can press the upload button (Icon looks like an arrow pointing right)
* Once uploaded, you can enjoy your new controller

## Prototype
![prototype](./images/prototype.png)
