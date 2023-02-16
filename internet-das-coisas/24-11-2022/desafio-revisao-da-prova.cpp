#include<Servo.h>

Servo mm;

int led_verde = 2;
int led_amarelo = 3;
int led_laranja = 4;
int led_vermelho = 5;
int angulo;

void setup(){
    Serial.begin(9600);
    mm.attach(6);
    pinMode(led_verde, OUTPUT);
    pinMode(led_amarelo, OUTPUT);
    pinMode(led_laranja, OUTPUT);
    pinMode(led_vermelho, OUTPUT);
}

void loop(){
    int valor_potenciometro = analogRead(A1);
    angulo =  map(valor_potenciometro, 0, 1023, 0, 180);
    mm.write(angulo);

    switch(angulo){
        case 28:
            digitalWrite(led_vermelho, HIGH);
            digitalWrite(led_verde,    LOW);
            digitalWrite(led_amarelo,  LOW);
            digitalWrite(led_laranja,  LOW);
            break;
        case 60:
            digitalWrite(led_laranja,  HIGH);
            digitalWrite(led_vermelho, LOW);
            digitalWrite(led_verde,    LOW);
            digitalWrite(led_amarelo,  LOW);
            break;
        case 115:
            digitalWrite(led_amarelo,  HIGH);
            digitalWrite(led_vermelho, LOW);
            digitalWrite(led_verde,    LOW);
            digitalWrite(led_laranja,  LOW);
            break;
        case 148:
            digitalWrite(led_verde,    HIGH);
            digitalWrite(led_vermelho, LOW);
            digitalWrite(led_amarelo,  LOW);
            digitalWrite(led_laranja,  LOW);
            break;
    }
}