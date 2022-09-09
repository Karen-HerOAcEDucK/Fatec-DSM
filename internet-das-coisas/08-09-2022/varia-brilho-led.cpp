int led = 3;

void setup(){
    pinMode(led, OUTPUT);
}

void loop(){
    int i;
    for(i=0; i<255; i++){
        analogWrite(led, i);
        delay(30);
    }
}