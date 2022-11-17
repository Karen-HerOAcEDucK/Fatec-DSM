int contador = 0;
int led = 13;
int led_seg_A = 2;
int led_seg_B = 3;
int led_seg_C = 4;
int led_seg_D = 5;
int led_seg_E = 6;
int led_seg_F = 7;
int led_seg_G = 8;
int led_seg_DP = 9;

void setup(){
    pinMode(led, OUTPUT);
    pinMode(led_seg_A, OUTPUT);
    pinMode(led_seg_B, OUTPUT);
    pinMode(led_seg_C, OUTPUT);
    pinMode(led_seg_D, OUTPUT);
    pinMode(led_seg_E, OUTPUT);
    pinMode(led_seg_F, OUTPUT);
    pinMode(led_seg_G, OUTPUT);
    pinMode(led_seg_DP, OUTPUT);
}

void limpa(){
    digitalWrite(led_seg_A, HIGH);
    digitalWrite(led_seg_B, HIGH);
    digitalWrite(led_seg_C, HIGH);
    digitalWrite(led_seg_D, HIGH);
    digitalWrite(led_seg_E, HIGH);
    digitalWrite(led_seg_F, HIGH);
    digitalWrite(led_seg_G, HIGH);
    digitalWrite(led_seg_DP, HIGH);
}

void zero(){
    digitalWrite(led_seg_A, LOW);
    digitalWrite(led_seg_B, LOW);
    digitalWrite(led_seg_C, LOW);
    digitalWrite(led_seg_D, LOW);
    digitalWrite(led_seg_E, LOW);
    digitalWrite(led_seg_F, LOW);
}

void um(){
    digitalWrite(led_seg_B, LOW);
    digitalWrite(led_seg_C, LOW);
}

void dois(){
    digitalWrite(led_seg_A, LOW);
    digitalWrite(led_seg_B, LOW);
    digitalWrite(led_seg_G, LOW);
    digitalWrite(led_seg_D, LOW);
    digitalWrite(led_seg_E, LOW);
}

void tres(){
    digitalWrite(led_seg_A, LOW);
    digitalWrite(led_seg_B, LOW);
    digitalWrite(led_seg_C, LOW);
    digitalWrite(led_seg_D, LOW);
    digitalWrite(led_seg_G, LOW);
}

void quatro(){
    digitalWrite(led_seg_F, LOW);
    digitalWrite(led_seg_G, LOW);
    digitalWrite(led_seg_B, LOW);
    digitalWrite(led_seg_C, LOW);
}

void cinco(){
    digitalWrite(led_seg_A, LOW);
    digitalWrite(led_seg_F, LOW);
    digitalWrite(led_seg_G, LOW);
    digitalWrite(led_seg_C, LOW);
    digitalWrite(led_seg_D, LOW);
}

void seis(){
    digitalWrite(led_seg_A, LOW);
    digitalWrite(led_seg_C, LOW);
    digitalWrite(led_seg_D, LOW);
    digitalWrite(led_seg_E, LOW);
    digitalWrite(led_seg_F, LOW);
    digitalWrite(led_seg_G, LOW);
}

void sete(){
    digitalWrite(led_seg_A, LOW);
    digitalWrite(led_seg_B, LOW);
    digitalWrite(led_seg_C, LOW);
}

void oito(){
    digitalWrite(led_seg_A, LOW);
    digitalWrite(led_seg_B, LOW);
    digitalWrite(led_seg_C, LOW);
    digitalWrite(led_seg_D, LOW);
    digitalWrite(led_seg_E, LOW);
    digitalWrite(led_seg_F, LOW);
    digitalWrite(led_seg_G, LOW);
}

void nove(){
    digitalWrite(led_seg_A, LOW);
    digitalWrite(led_seg_B, LOW);
    digitalWrite(led_seg_C, LOW);
    digitalWrite(led_seg_F, LOW);
    digitalWrite(led_seg_G, LOW);
}

void loop(){
    limpa();

    if(contador <= 9){
        switch(contador){
            case 0:
                zero();
                break;
            case 1:
                um();
                break;
            case 2:
                dois();
                break;
            case 3:
                tres();
                break;
            case 4:
                quatro();
                break;
            case 5:
                cinco();
                break;
            case 6:
                seis();
                break;
            case 7:
                sete();
                break;
            case 8:
                oito();
                break;
            case 9:
                nove();
                break;
        }
        delay(1000);
        contador++;
    } else {
        contador = 0;
    }
}