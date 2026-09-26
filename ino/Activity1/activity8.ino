

float x = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("sin:");
  Serial.print(sin(x));

  Serial.print(" cos:");
  Serial.print(cos(x));

  Serial.print(" half_sin:");
  Serial.println(0.5f * sin(x));

  x += 0.01f;
  delay(500);
}