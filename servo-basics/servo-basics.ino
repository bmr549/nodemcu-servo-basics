#include <Servo.h>

Servo myServo;
const int A_PIN = A0;
int rValue;


void setup() {
  Serial.begin(9600);

  pinMode(D1, INPUT);
  rValue = 10;
  
  myServo.attach(D0);
  myServo.write(0);
  delay(2000);
}

void loop() {

  
  
  int r = 0;
  while ((r >= 0) && (r <= 160)) {
    //r = rand() % 160;
    //Serial.print("Turning to: "); Serial.println(r);
    //int analogInput = analogRead(A0);
    int digitalInput = digitalRead(D1);
    Serial.print("Digital Input: "); Serial.println(digitalInput);
    
    if (digitalInput == 1) {
      r = 180;
    } else {
      r = 0;
    }
    
    myServo.write(r);
    delay(1000);
  }
  
  /*myServo.write(90);
  delay(1000);
  myServo.write(0);
  delay(1000);*/
}
