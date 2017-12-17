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

void L298n::forward(int mtrSpd){
	//run 1st motor
	digitalWrite(_in1, HIGH);
	digitalWrite(_in2, LOW);
	//set speed of 1st motor
	analogWrite(_enA, mtrSpd);
	//run 2nd motor
	digitalWrite(_in3, HIGH);
	digitalWrite(_in4, LOW);
	//set speed of 2nd motor
	analogWrite(_enB, mtrSpd);
}

void L298n::motorWrite(int mtrSpdL, int mtrSpdR){
	if(mtrSpdL>0){
		digitalWrite(_in1, HIGH);
		digitalWrite(_in2, LOW);
		analogWrite(_enA, mtrSpdL);
	}
	else if(mtrSpdL<0){
		digitalWrite(_in1, LOW);
		digitalWrite(_in2, HIGH);
		analogWrite(_enA, mtrSpdL);
	}
	if(mtrSpdR>0){
		digitalWrite(_in3, HIGH);
		digitalWrite(_in4, LOW);
		analogWrite(_enB, mtrSpdR);
	}
	else if(mtrSpdR<0){
		digitalWrite(_in3, LOW);
		digitalWrite(_in4, HIGH);
		analogWrite(_enB, mtrSpdR);
	}
}

void L298n::reverse(int mtrSpd){
	//run 1st motor
	digitalWrite(_in1, LOW);
	digitalWrite(_in2, HIGH);
	//set speed of 1st motor
	analogWrite(_enA, mtrSpd);
	//run 2nd motor
	digitalWrite(_in3, LOW);
	digitalWrite(_in4, HIGH);
	//set speed of 2nd motor
	analogWrite(_enB, mtrSpd);
}


void L298n::stop(){
	digitalWrite(_in1, LOW);
	digitalWrite(_in2, LOW);
	digitalWrite(_in3, LOW);
	digitalWrite(_in4, LOW);
}