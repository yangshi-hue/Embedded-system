int vResistor = A14; // potentiometer pin
void setup() {
 Serial.begin(9600);
}
void loop() {
 Serial.println(analogRead(vResistor)); // read via ADC
 delay(500);
}
