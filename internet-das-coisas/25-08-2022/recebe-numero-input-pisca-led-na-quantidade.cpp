int led = 13;

void setup(){
    Serial.begin(9600);
    pinMode(led, OUTPUT)    ;
}

void loop(){
    if(Serial.available() > 0){
        int numberInformed = Serial.parseInt();
        Serial.print("Número informado: ");
        Serial.print(numberInformed);

        int i;
        for(i = 0; i <= numberInformed; i++){
            digitalWrite(led, HIGH);
            delay(400);
            digitalWrite(led, LOW);
            delay(400);
        }
        
        Serial.print("Acabou!");
    }
}