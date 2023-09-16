
int sensor= A0;
int ledGrem= 9;
int ledRed= 8;
int Motor= 10;
const float umbralVoltaje = 5.0;

void setup() {
  Serial.begin(9600); // Inicializar la comunicación serial a 9600 baudios
  pinMode(sensor,INPUT);
  pinMode(ledGrem,OUTPUT);
  pinMode(ledRed,OUTPUT);
  

}

void loop() {
  int lectura = analogRead(sensor);
    // Convertir el valor de lectura a voltaje
  float voltaje = (lectura / 1023.0) * 5.0; // 5.0 es la referencia de voltaje de Arduino (5V)
   digitalWrite(ledGrem,HIGH);
   digitalWrite(Motor,HIGH);
  if (voltaje > umbralVoltaje) {
    
    digitalWrite(ledGrem, LOW);
    digitalWrite(Motor,LOW);
    // Encender el relé
  } else {
    digitalWrite(ledRed, HIGH); // Apagar el relé
    digitalWrite(Motor,LOW);
  }
  }
