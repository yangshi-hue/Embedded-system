
int joyBtn = 42, joyX = A2, joyY = A3;

void setup() {
  Serial.begin(9600);
  pinMode(joyBtn, INPUT);
}

void loop() {
  int x = analogRead(joyX);
  int y = analogRead(joyY);
  boolean btn = digitalRead(joyBtn);

  Serial.print(x);
  Serial.print("\t");
  Serial.print(y);
  Serial.print("\t");
  Serial.println(btn ? "OFF" : "ON"); // Active-LOW button

  delay(500);
}
