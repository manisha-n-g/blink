#ifndef FREERTS_H
#define FREERTS_H
#include "Arduino.h"
class freerts
{
    public:
    freerts(int pin,int delay);
    void ON();
    void OFF();
    int _pin;
    int _delay;

};
#endif 