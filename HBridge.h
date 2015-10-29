#ifndef H_HBRIDGE
#define H_HBRIDGE

#include "Arduino.h"

class HBridge
{
	private:
	int pin_enable;
	int pin_a;
	int pin_b;
	
	public:
	HBridge();
	void init(int _enable, int _a, int _b);
	void update(int _value);
	
};

#endif