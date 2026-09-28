int pin_button = 22;

boolean state_previous = LOW;
boolean state_current;
int count = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pin_button, INPUT);
}

void loop() {
  state_current = digitalRead(pin_button);

  if (state_current == HIGH) {
    if (state_previous == LOW) {
      count++;
      Serial.println(count);
    }
  }

  state_previous = state_current;
}