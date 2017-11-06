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
  l298n.stop();
  //forward();
  //delay(2000);
  //l298n.stop();
  //One second delay for motor to fully rest
  //delay(1000);
  //reverse();
  //delay(2000);
  //l298n.stop();
  //One second delay for motor to fully rest
  //delay(1000);
  //leftTurn();
  //delay(2000);
  //l298n.stop();
  //One second delay for motor to fully rest
  //delay(1000);
  //rightTurn();
  //delay(2000);
  //l298n.stop();
  //One second delay for motor to fully rest
  //delay(1000);
}

void forward(){
  //run 1st motor
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  //speed to 1st motor
  analogWrite(enA, 200);
  //run 2nd motor
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  //speed to 2nd motor
  analogWrite(enB, 200);
}

void reverse(){
  //run 1st motor
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  //speed to 1st motor
  analogWrite(enA, 200);
  //run 2nd motor
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  //speed to 2nd motor
  analogWrite(enB, 200);
}

void leftTurn(){
  //run 1st motor
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  //speed to 1st motor
  analogWrite(enA, 200);
  //run 2nd motor
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  //speed to 2nd motor
  analogWrite(enB, 200);
}

void rightTurn(){
  //run 1st motor
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  //speed to 1st motor
  analogWrite(enA, 200);
  //run 2nd motor
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  //speed to 2nd motor
  analogWrite(enB, 200);
}