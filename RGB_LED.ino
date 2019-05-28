int redPin=11;
int greenPin=6;
int bluePin=6;
int brightness=25;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin, 0);
analogWrite(greenPin,100);
analogWrite(bluePin,0);
}
