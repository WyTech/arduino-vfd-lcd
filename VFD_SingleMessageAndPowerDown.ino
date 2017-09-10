// single message example
#include <LiquidCrystal.h>
#include <avr/sleep.h>

// digispark pro D pins for rs,enable,db4,db5,db6,db7
LiquidCrystal lcd(5,0,12,11,10,9);  

void setup() {
  // 24x2 display
  lcd.begin(24,2);          
  
  // first line, centered
  lcd.setCursor(6, 0);
  lcd.print("eBay Seller");
  // second line, centered
  lcd.setCursor(3, 1);
  lcd.print("UsedAndDiscounted");
}

void loop() {
  // power down to save power
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();
  sleep_mode();
}
