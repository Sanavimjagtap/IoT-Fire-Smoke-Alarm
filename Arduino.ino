#define FLAME_SENSOR 2
#define BUZZER 3

void setup() {
  Serial.begin(115200); // Communication with ESP8266
  pinMode(FLAME_SENSOR, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  int fireDetected = digitalRead(FLAME_SENSOR);

  if (fireDetected == LOW) { // Flame sensors usually output LOW when fire is detected
    digitalWrite(BUZZER, HIGH);
    Serial.println("FIRE"); // Send alert signal to ESP8266
  } else {
    digitalWrite(BUZZER, LOW);
    Serial.println("SAFE");
  }
  delay(500);
}
