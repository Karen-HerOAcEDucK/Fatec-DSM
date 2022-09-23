void setup() {
    pinMode(9, OUTPUT);
}

void loop() {
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
    delay(1000);
}
/*-------------------------------------------------*/
/* Utilizando frequencias no buzzer para fazer variações sonoras*/
int i = 50;
void loop(){
    tone(9,i,500);
    i++;
    if(i==1000){
        i = 200;
    }
}