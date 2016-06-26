#import <Arduino.h>
#include "MotorCtrl.h"

MotorCtrl::MotorCtrl(int enablePin, int PinA, int PinB) 
{
  this->enablePin = enablePin;
  this->PinA = PinA;
  this->PinB = PinB;

  Serial.begin(9600); 
  pinMode(this->enablePin, OUTPUT);
  pinMode(this->PinA, OUTPUT);
  pinMode(this->PinB, OUTPUT);
}

void MotorCtrl::run(void) {
    digitalWrite(PinA, HIGH);
    digitalWrite(PinB, LOW);
}

void MotorCtrl::motor_set_speed(int v){
  Serial.print("set motor voltage to ");
  Serial.print(v);
  Serial.print("v\n");
  analogWrite(enablePin, v); // Run in half speed
}

void MotorCtrl::motor_stop(void){
  digitalWrite(enablePin, LOW);
}
