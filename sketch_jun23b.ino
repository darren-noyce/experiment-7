#include <Servo.h>
 
Servo myservo1; 
Servo myservo2;
Servo myservo3;    
 
void setup() {
  int pos = 0 ;
  myservo1.attach(10);
  myservo2.attach(9); 
  myservo3.attach(6);
}
 
void loop() {
 
    myservo1.write(60);
    myservo2.write(90);
    myservo3.write(90);
    delay(1000);                       
 

    myservo1.write(0);
    myservo2.write(0);
    myservo3.write(0);
    delay(1000);       

}
