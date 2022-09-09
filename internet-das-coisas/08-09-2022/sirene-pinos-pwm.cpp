int led_1 = 3;
int led_2 = 5;
int led_3 = 9;

void setup(){
    pinMode(led_1, OUTPUT);
    pinMode(led_2, OUTPUT);
    pinMode(led_3, OUTPUT);
}

int control;
int control_led_3;

void loop(){
    if(control <= 255){
        analogWrite(led_1, control);
        delay(60);

        analogWrite(led_2, 255 - control);
        control_led_3 = 255 - control;
        delay(60);

        int nivel_branco = (control >= 127) ? (control / 2) : (control * 2);
        analogWrite(led_3, nivel_branco);

        control++;
    } else {
        control = 0;
        control_led_3 = 0;
        analogWrite(led_1, 0);
        analogWrite(led_2, 0);
    }
}