#include<Servo.h>

Servo mm;
int i;

void setup(){
    mm.attach(2);
    pinMode(13, OUTPUT);
}

void dia(){
    for(i = 0; i == 180; i+15){
        mm.write(i);
        digitalWrite(13, HIGH);
        delay(2000);
    }
}

void noite(){
    for(i = 180; i == 0; i-15){
        mm.write(i);
        digitalWrite(13, LOW);
        delay(2000);
    }
}

void loop(){
    dia();
    noite();
}