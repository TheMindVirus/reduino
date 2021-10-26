#define PIN_VCC   7
#define PIN_GND   8

void setup()
{
    Serial.begin(115200);
    Serial.println("LED");
    pinMode(PIN_VCC, OUTPUT);
    pinMode(PIN_GND, OUTPUT);

}

void loop()
{
    Serial.println("STATE1");
    digitalWrite(PIN_VCC, HIGH);
    digitalWrite(PIN_GND, LOW);
    delay(100);
    Serial.println("STATE2");
    digitalWrite(PIN_VCC, HIGH);
    digitalWrite(PIN_GND, HIGH);
    delay(100);
    Serial.println("STATE3");
    digitalWrite(PIN_VCC, LOW);
    digitalWrite(PIN_GND, HIGH);
    delay(100);
    Serial.println("STATE4");
    digitalWrite(PIN_VCC, LOW);
    digitalWrite(PIN_GND, LOW);
    delay(100);
}
