// Hello world with counter example
#include <LiquidCrystal.h>

// digispark pro D pins for rs,enable,db4,db5,db6,db7
LiquidCrystal lcd(5,0,12,11,10,9);  

void setup() {
  // 24x2 display
  lcd.begin(24,2);          
  sayHello();  
}

void sayHello() {
  lcd.clear();
  lcd.print("Hello World.");
}

int last = 0;

void loop() {
  // this loop runs at high speed and is called many times per second
  // another good approach would be to use interrupts, but care must be 
  // taken not to interfere with other libraries
  int m = millis() /1000;

  // Only write the count when it has changed. 
  // This is different from the LiquidCrystal library example which does not 
  // take advantage of the modules' ability to offload the display function, 
  // and instead continuously rewrites the same values to the display.  
  // On the VFD, the repetitive writing can also causes flicker because VFD 
  // updates faster and does not have the memory effect of LCDs.  By writing 
  // only when needed, we eliminate the flicker and save power and compute cycles.
  if(m!=last) {
    // when m rolls over, clear the display
    if(m==0) sayHello();

    // write the number of seconds
    lcd.setCursor(0, 1);
    lcd.print(m);
    last = m;  // remember current time
  }

  // do other stuff here
}
