int botao_1 = 2;
int botao_2 = 3;
int botao_3 = 4;
int botao_4 = 5;
int botao_5 = 6;
int botao_6 = 7;
int botao_7 = 8;
int botao_8 = 9;
int buzzer  = 11;
int freq    = 50;

void setup(){
    pinMode(botao_1, INPUT_PULLUP);
    pinMode(botao_2, INPUT_PULLUP);
    pinMode(botao_3, INPUT_PULLUP);
    pinMode(botao_4, INPUT_PULLUP);
    pinMode(botao_5, INPUT_PULLUP);
    pinMode(botao_6, INPUT_PULLUP);
    pinMode(botao_7, INPUT_PULLUP);
    pinMode(botao_8, INPUT_PULLUP);
    pinMode(buzzer, OUTPUT);
}

void loop(){
    if(digitalRead(botao_1) == LOW){
        tone(buzzer, 4224, 10);
        return;
    } else if (digitalRead(botao_2) == LOW) {
        tone(buzzer, 2370, 10);
        return;
    } else if (digitalRead(botao_3) == LOW) {
        tone(buzzer, 1330, 10);
        return;
    } else if (digitalRead(botao_4) == LOW) {
        tone(buzzer, 705, 10);
        return;
    } else if (digitalRead(botao_5) == LOW) {
        tone(buzzer, 395, 10);
        return;
    } else if (digitalRead(botao_6) == LOW) {
        tone(buzzer, 444, 10);
        return;
    } else if (digitalRead(botao_7) == LOW) {
        tone(buzzer, 249, 10);
        return;
    } else if (digitalRead(botao_8) == LOW) {
        tone(buzzer, 264, 10);
        return;
    }
}