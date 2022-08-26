// Exercicio de esplicação de conteúdo

int recebido = 0;
void setup(){
	Serial.begin(9600);
}

void loop(){
    if(Serial.available() > 0){
        recebido = Serial.read();
        Serial.print(recebido);
        Serial.write(" - ");
        Serial.write(recebido);
        Serial.write("\n");
    }
}

// ---------------------------------------------------------------------
// Exercicio 01;

int count = 0;
int led = 13;

void setup(){
    Serial.begin(9600);
    pinMode(led, OUTPUT);
    randomSeed(analogRead(0));
}

void loop(){
    if(count < 10){
        int randomNumber = random(50, 100);
        Serial.println(randomNumber);

        if(randomNumber % 2 == 0){
            digitalWrite(led, HIGH);
            delay(300);
            digitalWrite(led, LOW);
            delay(300);
        }

        if(count == 10){
            Serial.print("Acabou! \n");
        }
    }
    count++;
    delay(1000);
}

// ---------------------------------------------------------------------
// Exercicio 02;

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