#ifndef Joint_h
#define Joint_h

#include "Arduino.h"
#include "Servo.h"

class Joint
{
    public:
        Joint();
        void SetPin(int pin);
        void SetAngle(int angle);
    private:
        Servo _servo;
};

#endif