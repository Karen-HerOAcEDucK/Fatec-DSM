int led_1 = 2;
int led_2 = 3;
int recebido = 0;

void setup(){
    Serial.begin(9600);
    pinMode(led_1, OUTPUT);
    pinMode(led_2, OUTPUT);
}

void loop(){
    if(Serial.available() > 0){
        recebido = Serial.parseInt();
        Serial.print(recebido);

        if(recebido == 1){
            digitalWrite(led_1, HIGH);
            delay(250);
            digitalWrite(led_1, LOW);
            delay(250);
        }
        if(recebido == 2){
            digitalWrite(led_2, HIGH);
            delay(250);
            digitalWrite(led_2, LOW);
            delay(250);
        }
    }
}