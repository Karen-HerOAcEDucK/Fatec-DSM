int led_1 = 2;
int led_2 = 3;
int led_3 = 4;
int led_4 = 5;
char recebido = 'D';

void setup(){
    Serial.begin(9600);
    pinMode(led_1, OUTPUT);
    pinMode(led_2, OUTPUT);
    pinMode(led_3, OUTPUT);
    pinMode(led_4, OUTPUT);
}

void pisca_led(int led){
    digitalWrite(led, HIGH);
    delay(350);
    digitalWrite(led, LOW);
    delay(350);
}

void liga_todos_leds(){
    digitalWrite(led_1, HIGH);
    digitalWrite(led_2, HIGH);
    digitalWrite(led_3, HIGH);
    digitalWrite(led_4, HIGH);
}

void desliga_todos_leds(){
    digitalWrite(led_1, LOW);
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, LOW);
    digitalWrite(led_4, LOW);
}

void pisca_leds_sequencial(){
    pisca_led(led_1);
    delay(250);
    pisca_led(led_2);
    delay(250);
    pisca_led(led_3);
    delay(250);
    pisca_led(led_4);
    delay(250);
}

void pisca_leds_sequencial_invertido(){
    pisca_led(led_4);
    delay(250);
    pisca_led(led_3);
    delay(250);
    pisca_led(led_2);
    delay(250);
    pisca_led(led_1);
    delay(250);
}

void loop(){
    if(Serial.available() > 0){
        recebido = Serial.read();
        Serial.print(recebido);
    } 

    if(recebido == 'A'){
        pisca_leds_sequencial_invertido();
        return loop();
    } else if(recebido == 'B'){
        desliga_todos_leds();
        return loop();
    } else if(recebido == 'C'){
        liga_todos_leds();
        return loop();
    } else if(recebido == 'D'){
        pisca_leds_sequencial();
        return loop();
    }
}