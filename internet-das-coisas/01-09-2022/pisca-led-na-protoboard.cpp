int led = 2;
int ledAzul = 3;

void setup()
{
    pinMode(led, OUTPUT);
    pinMode(ledAzul, OUTPUT);
}

void loop()
{
    digitalWrite(led, HIGH);
    delay(300);
    digitalWrite(led, LOW);
    delay(300);
    digitalWrite(ledAzul, HIGH);
    delay(300);
    digitalWrite(ledAzul, LOW);
    delay(300);
}