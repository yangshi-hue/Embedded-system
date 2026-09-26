void setup() {
    pinMode(LED_BUILTIN, OUTPUT); //for configuring the pin
}
void loop() {
    digitalWrite(LED_BUILTIN,HIGH);
    delay(1000); //delay the lights on by 1 sec
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}