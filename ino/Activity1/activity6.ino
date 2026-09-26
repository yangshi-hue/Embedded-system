void setup() {
    Serial.begin(9600);
    Serial.println("Type something or press Enter");
}
void loop () {
    if (Serial.available () > 0) {
        String line = Serial.readStringUntil('\n');
        trim.line();
        Serial.print("You typed : ");
        Serial.print(line);
        Serial.print("length ");
        Serial.println(line.length());
    }
}