#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  lcd.begin(16,2);
}

void loop() {
 lcd.setCursor(0,0);
 lcd.print("Abi");
 lcd.setCursor(8,1);
 lcd.print("shek");
 
}
