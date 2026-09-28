
int pins[] = {10, 11, 12, 13};
int index = 0;

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 4; i++) {
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], LOW);
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    if (i == index) {
      digitalWrite(pins[i], HIGH);
      Serial.print("O ");
    } else {
      digitalWrite(pins[i], LOW);
      Serial.print("X ");
    }
  }

  Serial.println();
  delay(500);

  index = (index + 1) % 4;
}