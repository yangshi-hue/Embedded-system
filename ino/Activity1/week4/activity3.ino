int pins[] = {10, 11, 12, 13};
int index = -1;

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 4; i++) {
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], LOW);
  }
}

void loop() {
  if (Serial.available()) {
    char data = Serial.read();

    if (data >= '1' && data <= '4') {
      index = data - '0' - 1;
    } 
    else {
      Serial.println("Invalid LED number");
      index = -1;
    }

    for (int i = 0; i < 4; i++) {
      if (i == index) {
        digitalWrite(pins[i], HIGH);
      } 
      else {
        digitalWrite(pins[i], LOW);
      }
    }
  }
}