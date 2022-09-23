int buzzer = 9;
void setup(){
    pinMode(buzzer, OUTPUT);
}

void loop(){
    tone(buzzer, 690 , 750);
  	delay(350);
    tone(buzzer, 200 , 1000);
 	delay(350);
    tone(buzzer, 690 , 650);
  	delay(450);
    tone(buzzer, 200 , 1000);
  	delay(250);
}