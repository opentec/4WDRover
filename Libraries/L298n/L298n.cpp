/*
	FILE: L298n.cpp
	PURPOSE: L298n Motor controller library for Arduino
*/
#include "Arduino.h"
#include "L298n.h"

L298n::L298n(int enA, int enB, int in1, int in2, int in3, int in4){
	pinMode(enA, OUTPUT);
	pinMode(enB, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);
	_enA = enA;
	_enB = enB;
	_in1 = in1;
	_in2 = in2;
	_in3 = in3;
	_in4 = in4;
}

/*
void L298n::reverse(){
	//run 1st motor
	digitalWrite(_in1, LOW);
	digitalWrite(_in1, HIGH);
	//speed to 1st motor
	analogWrite(_enA, 100);
	digitalWrite(_in3, LOW);
	digitalWrite(_in1, HIGH);
	//speed to 2nd motor
	analogWrite(_enB, 100);
}
*/

void L298n::stop(){
	digitalWrite(_in1, LOW);
	digitalWrite(_in2, LOW);
	digitalWrite(_in3, LOW);
	digitalWrite(_in4, LOW);
}