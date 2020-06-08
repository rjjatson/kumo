#include "Arduino.h"
#include "Joint.h"
#include "Servo.h"

Joint::Joint(){ 
};

void Joint::SetPin(int pin){
    _servo.attach(pin);
};

void Joint::SetAngle(int angle){
    _servo.write(angle);
};