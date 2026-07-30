#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2
#define FAN_RELAY 8
#define PUMP_RELAY 9
#define STATUS_LED 13

LiquidCrystal_I2C lcd(0x27,16,2);

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

float ON_TEMP = 18.0;
float OFF_TEMP = 15.0;

bool cooling=false;

void setup()
{
    pinMode(FAN_RELAY,OUTPUT);
    pinMode(PUMP_RELAY,OUTPUT);
    pinMode(STATUS_LED,OUTPUT);

    digitalWrite(FAN_RELAY,HIGH);
    digitalWrite(PUMP_RELAY,HIGH);

    lcd.init();
    lcd.backlight();

    sensors.begin();

    lcd.setCursor(0,0);
    lcd.print("Solar Cooler");
    delay(2000);
    lcd.clear();
}

void loop()
{
    sensors.requestTemperatures();
    float temp=sensors.getTempCByIndex(0);

    lcd.setCursor(0,0);
    lcd.print("Temp:");
    lcd.print(temp,1);
    lcd.print((char)223);
    lcd.print("C ");

    if(temp>=ON_TEMP && !cooling)
    {
        cooling=true;

        digitalWrite(FAN_RELAY,LOW);
        digitalWrite(PUMP_RELAY,LOW);
        digitalWrite(STATUS_LED,HIGH);
    }

    if(temp<=OFF_TEMP && cooling)
    {
        cooling=false;

        digitalWrite(FAN_RELAY,HIGH);
        digitalWrite(PUMP_RELAY,HIGH);
        digitalWrite(STATUS_LED,LOW);
    }

    lcd.setCursor(0,1);

    if(cooling)
        lcd.print("Cooling ON   ");
    else
        lcd.print("Cooling OFF  ");

    delay(1000);
}
