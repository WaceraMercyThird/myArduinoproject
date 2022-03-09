// C++ code
//
/*
  Fade
  This example shows how to fade an LED on pin 9
  using the analogWrite() function.

  The analogWrite() function uses PWM, so if  you
  want to change the pin you're using, be  sure to
  use another PWM capable pin. On most  Arduino,
  the PWM pins are identified with   a "~" sign,
  like ~3, ~5, ~6, ~9, ~10 and ~11.
*/


void setup()
{
  
  pinMode(1 , OUTPUT);
  pinMode(2 , OUTPUT);
}


void loop(){
  digitalWrite(1, HIGH);
  delay(1000);
   digitalWrite(1, LOW);
  delay(100);
  
  digitalWrite(2, HIGH);
  delay(1000);
   digitalWrite(2, LOW);
  delay(100);
  

}