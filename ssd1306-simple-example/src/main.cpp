#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(false);

void setup() {
    display.begin(SSD1306_SWITCHCAPVCC, 0x3c);
    display.display();
    delay(2000);
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setCursor(0,0);
    display.println("I love Katie <3");
    display.display();
}

void loop() {}