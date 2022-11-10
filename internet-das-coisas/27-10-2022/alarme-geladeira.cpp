unsigned long time = 0;
int buzzer = 3; 
int ldr = A0;
int entrada = 0;

void setup(){
    pinMode(ldr, INPUT);
    pinMode(buzzer, OUTPUT);
    time = millis();

    Serial.begin(9600);
}

void loop(){
    entrada = analogRead(ldr);
    
    if(entrada > 0 && (millis() - time) > 30000){
        tone(buzzer, 690 , 750);

        time = millis();
    } else {
        analogWrite(buzzer, 0);
    }
}