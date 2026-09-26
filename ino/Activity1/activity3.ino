count = 1;
void setup() {
    Serial.begin(9600);
    Serial.println("Board Ready);
}
void loop() {
    count = count + 1;
    Serial.print("Count");
    Serial.print(count);
    Serial.println("times");
    delay(1000);
}