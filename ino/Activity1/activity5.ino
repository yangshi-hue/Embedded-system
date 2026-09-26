void setup() {
    Serial.begin(9600);
    Serial.println("Type something or press Enter ");

}
void loop () {
    if (Serial.available() > 0){ /*check if there is atleast one character*/
        char c = Serial.read();
        Serial.print("Recieved : ");
        Serial.println(c); //it prints every character in new line
        Serial.print(c); //prints a whole word in one line 
    }
}