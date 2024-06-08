#include <Arduino.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

#define RED_LED D5
#define GREEN_LED D6

Adafruit_MPU6050 mpu;

/* Prints sensor data to the serial output */
void print_data(void);

/* Initializes peripherials and serial */
void init_devices(void){
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  // Make sure that the led's are low
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, LOW);

  Serial.begin(9600);
  while(!mpu.begin()){
    Serial.println("SENSOR ERROR!");
    digitalWrite(RED_LED, HIGH);
    delay(500);
  }

  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);

  // Disable cycling and sleeping
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
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
  sensors_event_t accel, gyro, temp;
  mpu.getEvent(&accel, &gyro, &temp);

  Serial.print(accel.gyro.x);
  Serial.print(";"); 
  Serial.print(accel.gyro.y);
  Serial.print(";"); 
  Serial.print(accel.gyro.z);
  Serial.println();

  delay(50);
}