int n = 255;
float t = 25.4567;
void setup() {
    Serial.begin(9600);
    Serial.println(n);
    Serial.println(n, HEX);
    Serial.println(n,BIN);

    Serial.println(t);
    Serial.println(t, 4);
    Serial.write(65)
}