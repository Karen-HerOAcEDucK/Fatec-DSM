float cm, leitura, calculaDistancia;
byte trigger = 4, echo = 5;

void setup() {
    pinMode(trigger, OUTPUT);
    pinMode(echo, INPUT);

    Serial.begin(9600);
}

float distancia() {
    digitalWrite(trigger, LOW);
    delayMicroseconds(5);
    digitalWrite(trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger, LOW);

    leitura = pulseIn(echo, HIGH);

    calculaDistancia = (leitura/2) * 0.0343;

    if(calculaDistancia >= 331){
        calculaDistancia = 0;
    }

    return calculaDistancia;
}

void loop() {
    cm = distancia();
    Serial.print("Distancia em cm ");
    Serial.print(cm);
    Serial.println(" cm");
    delay(1000);
}