int buttons[] = {22, 23, 24, 25};

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 4; i++) {
    pinMode(buttons[i], INPUT);
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    Serial.print(digitalRead(buttons[i]));
    Serial.print(" ");
  }

  Serial.println();
  delay(1000);
}