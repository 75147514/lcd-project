#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop() {
  if (Serial.available() > 0) {
    int number = Serial.parseInt();
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Number: ");
    lcd.setCursor(0, 1);
    lcd.print(number);
  }
}
