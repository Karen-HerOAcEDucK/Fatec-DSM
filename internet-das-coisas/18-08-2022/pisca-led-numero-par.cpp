int led = 13;
int count = 1;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    digitalWrite(led, HIGH);

    if (count <= 10) {
        if (count % 2 == 0) {
            delay(300);
            digitalWrite(led, LOW);
            delay(300);
            digitalWrite(led, HIGH);
            delay(300);
            digitalWrite(led, LOW);
        } else {
            delay(1000);
            digitalWrite(led, LOW);
        }
        delay(1000);
    }
    count++;
}