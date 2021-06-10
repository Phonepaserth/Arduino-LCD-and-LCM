#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 column and 2 rows

byte customChar0[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000,
  0b00000
};


void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight();
  lcd.createChar(0, customChar0); // create a new custom character (index 0)
  start();
  lcd.setCursor(4, 0);
  lcd.print("I");
  lcd.setCursor(7, 0); // move cursor to (2, 0)
  lcd.write((byte)0);  // print the custom char 0 at (2, 0)
  lcd.setCursor(9, 0);
  lcd.print("You");
}

void loop()
{
}


void start(){
  lcd.setCursor(1, 0);
  lcd.write((byte)0);  // print the custom char 0 at (2, 0)
  delay(500);
  lcd.setCursor(3, 0);
  lcd.write((byte)0);  // print the custom char 0 at (2, 0)
  delay(500);
  lcd.setCursor(6, 0);
  lcd.write((byte)0);  // print the custom char 0 at (2, 0)
  delay(500);
  lcd.setCursor(9, 0);
  lcd.write((byte)0);  // print the custom char 0 at (2, 0)
  delay(500);
  lcd.setCursor(12, 0);
  lcd.write((byte)0);  // print the custom char 0 at (2, 0)


  delay(2000);
  lcd.clear();

  
}
