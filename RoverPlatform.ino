#include <L298n.h>
// Motor controller pins to Ardunio digital pins. Adjust according to your application.
// Declare motor 1
int enA = 3;
int in1 = 4;
int in2 = 5;
// Declare motor 2
int enB = 10;
int in3 = 6;
int in4 = 9;

L298n l298n(3,10,4,5,6,9);

void setup() {

}

void loop() {
//Starting from a stop point
  l298n.stop();
  l298n.forward(200);
//Two second delay for motor to fully rest
  delay(2000);
  l298n.leftSpin(100);
  delay(2000);
  l298n.forward(200):
  delay(2000);
  l298n.stop();
  l298n.reverse(200);
  delay(2000);
}