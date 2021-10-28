#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

#define PIN_BKL   A0
#define PIN_LED   7
#define PIN_GND   8

Adafruit_ST7735 display = Adafruit_ST7735(A1, A2, A4, A5, A3);

void setup()
{
    Serial.begin(115200);
    Serial.println("ST7735Screen");
    pinMode(PIN_BKL, OUTPUT);
    pinMode(PIN_LED, OUTPUT);
    pinMode(PIN_GND, OUTPUT);
    digitalWrite(PIN_BKL, HIGH);
    digitalWrite(PIN_LED, HIGH);
    digitalWrite(PIN_GND, LOW);
    //display.begin();
    display.initR(INITR_BLACKTAB);
    display.setRotation(1);
    display.fillScreen(ST77XX_RED);
    display.setCursor(10, 10);
    display.setTextSize(5);
    display.setTextColor(ST77XX_BLACK);
    display.println("HelloWorld(0.0)");
}

void loop()
{

}
