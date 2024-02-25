#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  lcd.begin(16,2);
}

void loop() {
 lcd.setCursor(0,0);
 lcd.print("  Train No: 12676 - Kovai SF Express ");
 lcd.scrollDisplayLeft();
 delay(500);
}
