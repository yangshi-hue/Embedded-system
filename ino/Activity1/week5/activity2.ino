int vResistor = A14;
int pins_LED[] = { 10, 11, 12, 13 };
void setup() {
 Serial.begin(9600);
 for (int i = 0; i < 4; i++) {
 pinMode(pins_LED[i], OUTPUT);
 digitalWrite(pins_LED[i], LOW);
 }
}
void loop() {
 int adc = analogRead(vResistor);
 int count_led = (adc >> 8) + 1; // 0..1023 -> 1..4
 for (int i = 0; i < 4; i++) {
 if (i < count_led) digitalWrite(pins_LED[i], HIGH);
 else digitalWrite(pins_LED[i], LOW);
 }
 Serial.println(String("ADC : ") + adc + ", LED count : " + count_led);
 delay(500);
}
