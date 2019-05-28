#include <LiquidCrystal.h>
LiquidCrystal LCD(10,9,5,4,3,2);
int myCounter=0;

void setup() {
  // put your setup code here, to run once:
LCD.begin(16,2);
LCD.setCursor(0,0);
LCD.print("My Timer");

}

void loop() {
  // put your main code here, to run repeatedly:
for (myCounter=1; myCounter<=10; myCounter=myCounter+1){

  LCD.setCursor(0,1);
  LCD.print("  ");
  
  LCD.setCursor(0,1);
  LCD.print(myCounter);
  LCD.print("Seconds");
  delay(1000);
}
for (myCounter=10; myCounter>=0; myCounter=myCounter-1){
  
  LCD.setCursor(0,1);
  LCD.print("  ");
  
  LCD.setCursor(0,1);
  LCD.print(myCounter);
  LCD.print("Seconds");
  delay(1000);
}
}
