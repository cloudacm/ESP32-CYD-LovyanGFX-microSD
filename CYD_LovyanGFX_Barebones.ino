#define LGFX_AUTODETECT
#include <LovyanGFX.hpp>

static LGFX lcd;

void drawGradation(void)
{
  lcd.startWrite();
  lcd.setAddrWindow(0, 0, lcd.width(), lcd.height());
  for (int y = 0; y < lcd.height(); ++y) {
    for (int x = 0; x < lcd.width(); ++x) {
      int red = 18;
      int green = 31;
      int blue = 49;
      lcd.writeColor(lcd.color888(red, green, blue), 1);
    }
  }
  lcd.endWrite();
}


void setup(void)
{
  lcd.init();
  delay(3000);
}

void loop(void)
{
  drawGradation();
  lcd.setFont(&fonts::Font2);
  lcd.setTextColor(0x00FF00U, 0x121F31U);  //Lime text on RGB 18, 31, 49 background, hex values 0x12, 0x1F, 0x31
  delay(3000);
  
  lcd.setCursor(10, 10);
  lcd.print("Barebones...");
  delay(500);
  lcd.print("...Demo");
  delay(3000);
  lcd.setCursor(10, 26);
  lcd.print("CloudACM");
  delay(3000);
  lcd.setCursor(10, 26);
  lcd.print("This should change");
  delay(3000);
  lcd.setCursor(10, 26);
  lcd.print("Does it do that ?  ");
  delay(3000);
  lcd.setCursor(10, 26);
  lcd.print("                    ");
  delay(3000);
  
}
