#include<Arduino.h>
#include "freerts.h"

freerts ::freerts(int pin,int delay)
{
    pinMode(pin,OUTPUT);
    _pin=pin;
    _delay=delay;
}
void freerts::ON()
{
    digitalWrite(_pin,HIGH);
    delay(_delay);
}
void freerts::OFF()
{
    digitalWrite(_pin,LOW);
    delay(_delay);

}