void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.write("Hello Serial!\n");
    Serial.println("Arduino");
    Serial.println(65, HEX);

    delay(1000);
}