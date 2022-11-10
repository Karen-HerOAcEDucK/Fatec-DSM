unsigned long tempo = 0;
int led = 13;

void setup(){
    pinMode(led, OUTPUT);
	tempo = millis();
}

void loop(){
    if((millis() - tempo) > 1000){
        digitalWrite(led, !digitalRead(led));
        tempo = millis();
    }
}