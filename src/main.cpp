#include <Arduino.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

#define RED_LED PB3
#define GREEN_LED PB4
#define JOYSTICK_PIN_X PA1
#define JOYSTICK_PIN_Y PA2
#define EXTERNAL_BUTTON PB15

Adafruit_MPU6050 mpu;

/* Prints data to the serial output */
void print_data(void);

/* Initializes peripherials and serial */
void init_devices(void){
  // Pin setup
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(EXTERNAL_BUTTON, INPUT);

  // Make sure that the led's are low
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, LOW);

  Serial.begin(9600);
  while(!mpu.begin()){ // Checks if the sensor is connected and working
    Serial.println("SENSOR ERROR!");
    digitalWrite(RED_LED, HIGH);
    delay(500);
  }

  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);

  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  
  // Disable cycling and sleeping
  mpu.enableCycle(false);
  mpu.enableSleep(false);
}

void setup(void){
  init_devices();
}

void loop(void){
  print_data();
}

void print_data(void){
  float joystickDataX = analogRead(JOYSTICK_PIN_X);
  float joystickDataY = analogRead(JOYSTICK_PIN_Y);
  int buttonData = digitalRead(EXTERNAL_BUTTON);

  sensors_event_t accel, gyro, temp;
  mpu.getEvent(&accel, &gyro, &temp);

  Serial.print(accel.gyro.x);
  Serial.print(";"); 
  Serial.print(accel.gyro.y);
  Serial.print(";"); 
  Serial.print(accel.gyro.z);
  Serial.print(";");
  Serial.print(joystickDataX);
  Serial.print(";");
  Serial.print(joystickDataY);
  Serial.print(";");
  Serial.print(buttonData);
  Serial.println();

  //delay(50);
  delay(20);
}