int REDLED =8;
int GREENLED=10;
int BlinknumRED=5;
int BlinknumGREEN=6;

void setup() {
        Serial.begin(9600);
        pinMode(REDLED,OUTPUT);
        pinMode(GREENLED,OUTPUT);
        Serial.print("This is my print");
  // put your setup code here, to run once:

}

void loop() {
  
  for (int j=1;j<=BlinknumRED;j=j+1)
  
  {
    Serial.println(j);
  Serial.println("This is the REDLED Blinking");
  
  
              digitalWrite(REDLED,HIGH);
              delay(1000);
              digitalWrite(REDLED,LOW);
              delay(1000);
  }


  for (int m=1;m<=BlinknumGREEN;m=m+1)
            { Serial.println(m);
             Serial.println("This is the GREENLED Blinking");
              
             
              digitalWrite(GREENLED,HIGH);
              delay(1000);
              digitalWrite(GREENLED,LOW);
              delay(1000); 
      }       
              
              
             
            
              
  // put your main code here, to run repeatedly:

}
