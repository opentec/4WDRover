/*
	FILE: L298n.h
	PURPOSE: L298n Motor controller library for Arduino
*/

#ifndef L298n_h
#define L298n_h

#include "Arduino.h"

class L298n{
  public:
	L298n(int enA, int enB, int in1, int in2, int in3, int in4);
	void forward(int mtrSpd);
	void reverse(int mtrSpd);
	void stop();
  private:
    int _enA;
	int _enB;
	int _in1;
	int _in2;
	int _in3;
	int _in4;
};
#endif;