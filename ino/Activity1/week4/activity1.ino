void setup() {
    pinMode(13, OUTPUT); // direction: output
}
void loop() {
    digitalWrite(13, HIGH); // 1 → LED o
    delay(1000);
    digitalWrite(13, LOW); // 0 → LED off
    delay(1000);
}