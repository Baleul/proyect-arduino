int motor = 3;
int entrada_analogica = A0;

void setup() {
  pinMode (motor, OUTPUT);
  pinMode (entrada_analogica, INPUT);
  Serial.begin(9600);
}

void loop() {
  int valor_entrada_analogica = 0;
  int valor_salida_pwm = 0;

  valor_entrada_analogica = analogRead(entrada_analogica);
  valor_salida_pwm = map(valor_entrada_analogica, 0, 1023, 0, 255);
  analogWrite(motor, valor_salida_pwm);

  digitalWrite(motor, HIGH);
  delay(100000);
  digitalWrite(motor, LOW);
  delay(100000);
}
