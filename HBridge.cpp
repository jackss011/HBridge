#include "HBridge.h"
#include "Arduino.h"

HBridge::HBridge()
{}

void HBridge::init(int enable, int a, int b)
{
	pin_a = a;
	pin_b = b;
	pin_enable = enable;

	pinMode(pin_enable, OUTPUT);
	pinMode(pin_a, OUTPUT);
	pinMode(pin_b, OUTPUT);
}

void HBridge::update(int value)
{
	if(value == 0)
	{
		digitalWrite(pin_a, false);
		digitalWrite(pin_b, false);
		digitalWrite(pin_enable, false);
		return;
	}

	if(value > 0)
	{
		digitalWrite(pin_a, true);
		digitalWrite(pin_b, false);
		analogWrite(pin_enable, value);
	}
	else
	{
		digitalWrite(pin_a, false);
		digitalWrite(pin_b, true);
		analogWrite(pin_enable, value*-1);
	}
}
