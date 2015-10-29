#include "HBridge.h"
#include "Arduino.h"

HBridge::HBridge()
{}

void HBridge::init(int _enable, int _a, int _b)
{
	pin_a = _a;
	pin_b = _b;
	pin_enable = _enable;
	
	pinMode(pin_enable, OUTPUT);
	pinMode(pin_a, OUTPUT);
	pinMode(pin_b, OUTPUT);
}

void HBridge::update(int _value)
{
	if(_value != 0)
	{
		if(_value > 0)
		{
			digitalWrite(pin_a, true);
			digitalWrite(pin_b, false);
			analogWrite(pin_enable, _value);
		}
		else
		{
			digitalWrite(pin_a, false);
			digitalWrite(pin_b, true);
			analogWrite(pin_enable, _value*-1);	
		}
	}
	else
	{
		digitalWrite(pin_a, false);
		digitalWrite(pin_b, false);
		digitalWrite(pin_enable, false);	
	}
}