int pins_LED[] = {10, 11};
int pins_button[] = {22, 23};

void setup() {
  for (int i = 0; i < 2; i++) {
    pinMode(pins_LED[i], OUTPUT);
    pinMode(pins_button[i], INPUT);
  }
}

void loop() {
  for (int i = 0; i < 2; i++) {
    boolean state = digitalRead(pins_button[i]);
    digitalWrite(pins_LED[i], state);
  }
}