int pins_LED[] = { 2, 3, 5 };

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 3; i++) pinMode(pins_LED[i], OUTPUT);
}

void loop() {
  int adc = analogRead(A14); // 0..1023
  int pwm = adc >> 2;        // 0..255

  Serial.println(String("ADC : ") + adc + ", PWM : " + pwm);

  for (int i = 0; i < 3; i++) analogWrite(pins_LED[i], pwm);

  delay(500);
}
#setting the colors manually
int pins_LED[] = { 2, 3, 5 };

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 3; i++) pinMode(pins_LED[i], OUTPUT);
}

void loop() {
  // Red
  analogWrite(pins_LED[0], 255);
  analogWrite(pins_LED[1], 0);
  analogWrite(pins_LED[2], 0);
  delay(2000);

  // Green
  analogWrite(pins_LED[0], 0);
  analogWrite(pins_LED[1], 255);
  analogWrite(pins_LED[2], 0);
  delay(2000);

  // Blue
  analogWrite(pins_LED[0], 0);
  analogWrite(pins_LED[1], 0);
  analogWrite(pins_LED[2], 255);
  delay(2000);
}