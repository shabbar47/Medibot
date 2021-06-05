#include <LiquidCrystal.h>
#include <Servo.h> 
 
Servo myservo1,myservo2,myservo3,myservo4;
LiquidCrystal lcd(12, 13,8,9,10,11);
                
int value=0,tPin=1;
void setup() 
{ 
  lcd.begin(16, 2);
  lcd.print("Morning Dose!!");
  myservo1.attach(1);
  myservo2.attach(2);
  myservo3.attach(3);
  myservo4.attach(4);
} 
 
void loop() 
{  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Place your");
  lcd.setCursor(0, 1);
  lcd.print("Finger (Temp)!!");
  value=analogRead(tPin);
  int cel= (value/1024)*500;
  int far= (cel*9)/5 +32;
  delay(5000);
  lcd.clear();
  
  lcd.setCursor(0, 0);
  lcd.print("Your Temp is :");
  lcd.setCursor(7, 1);
  lcd.print(far);
  lcd.setCursor(10, 0);
  lcd.print("Farhnt");
  delay(3000);
  lcd.clear();
  
  
  lcd.setCursor(0, 0);
  lcd.print("Place your");
  lcd.setCursor(0, 1);
  lcd.print("Finger (BPM)!!");
  delay(2000);
  lcd.clear();
  
  
  lcd.setCursor(0, 0);
  lcd.print("Calculating BPM ♥");
  lcd.setCursor(4, 1);
  lcd.print("♥♥♥ ....");
  delay(10000);
  lcd.clear();
  
  lcd.setCursor(0, 0);
  lcd.print("Take Your Tabs!");
  
  
  myservo1.write(0);
  delay(5000);
  myservo1.write(90);
  delay(5000);
  myservo2.write(0);
  delay(5000);
  myservo2.write(90);
  delay(5000);
  myservo3.write(0);
  delay(5000);
  myservo3.write(90);
  delay(5000);
  if(far>100)
  {
    myservo4.write(0);
    delay(5000);
    myservo4.write(90);
    delay(5000);
  }
}
