int count = 0;
int led = 13;

void setup(){
    Serial.begin(9600);
    pinMode(led, OUTPUT);
    randomSeed(analogRead(0));
}

void loop(){
    if(count < 10){
        int randomNumber = random(50, 100);
        Serial.println(randomNumber);

        if(randomNumber % 2 == 0){
            digitalWrite(led, HIGH);
            delay(300);
            digitalWrite(led, LOW);
            delay(300);
        }

        if(count == 10){
            Serial.print("Acabou! \n");
        }
    }
    count++;
    delay(1000);
}