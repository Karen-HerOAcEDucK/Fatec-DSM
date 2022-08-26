int led = 13;

// Declara um buffer para recebermos os caracteres seriaiscomo char, declarando
// como 0, pois na tabela ASCII 0 se refere a NULL
//
// OBS: Em uma padronização de protocolo é mais eficiente e mais seguro
// se declarar o buffer como int
char recebido = 0;

void setup() {
    Serial.begin(9600);
    pinMode(led, OUTPUT);
}

void loop() {
    if (Serial.available() > 0) {
        recebido = Serial.read();

        if (recebido == 'a') {
            digitalWrite(led, HIGH);
        } else if (recebido == 'b') {
            digitalWrite(led, LOW);
        } else {
            Serial.write("Caracter invalido: ");
            Serial.write(recebido);
        }
    }
}