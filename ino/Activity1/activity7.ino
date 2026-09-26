String course = "Embedded";
String board = "Mega2560";
String both = course +" "+ board;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    Serial.println(both);
    Serial.println(both.length());
    both.toUpperCase();
    Serial.println(both);
    Serial.println(both.indexOf("mega"));
    Serial.println(both.substring(0,8));
}

void loop() {
    }
