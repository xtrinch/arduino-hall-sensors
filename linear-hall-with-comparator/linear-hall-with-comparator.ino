#include <LiquidCrystal.h>

const int A0Pin = A0;
const int D0Pin = 8;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(3, 4, 9, 10, 11, 12);

void setup()
{
  pinMode(D0Pin, INPUT);
  lcd.begin(16, 2);  // set up the LCD's number of columns and rows:
}

void loop()
{
  int analogVal = analogRead(A0Pin);
  int digitalVal = digitalRead(D0Pin);
  lcd.setCursor(0,0);
  lcd.print("Analog Value:");
  lcd.print(analogVal);
  lcd.setCursor(0,1);
  lcd.print("Digital Value:");
  lcd.print(digitalVal);
}
