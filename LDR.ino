//int ldr=2;
#include<Servo.h>
Servo sweaty;


void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  Serial.begin(9600);
  sweaty.attach(3);

}

void loop() {
  // put your main code here, to run repeatedly:
int a = analogRead(A1);
  Serial.println(a);
  if(a==LOW){

    for(int i=0;i<= 90; i++){
      sweaty.write(90);
    }
    
  }
  else{
    sweaty.write(0);
    
    
  }

}
