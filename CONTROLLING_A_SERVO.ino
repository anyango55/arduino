#include <Servo.h>
int pos=0;
int servoPin=9;
int servoDelay=25;

Servo myPointer;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myPointer.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
for (pos=15; pos<=170 ; pos=pos+2){
  myPointer.write(pos);
  delay(servoDelay);
}

for (pos=170; pos>=15; pos=pos-1){
  myPointer.write(pos);
  delay(servoDelay);
}
}
