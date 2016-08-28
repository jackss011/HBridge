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
	void init(int enable, int a, int b);
	void update(int value);
};

#endif
