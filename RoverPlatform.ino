// Motor controller pins to Ardunio digital pins. Adjust according to your application.
// Declare motor 1
int enA = 3;
int in1 = 4;
int in2 = 5;
// Declare motor 2
int enB = 10;
int in3 = 6;
int in4 = 9;

void setup() {
  // set pin mode to output
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {

}

void stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
