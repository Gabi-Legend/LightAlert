int buzzer = 9;

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int light_level = analogRead(A4);
  Serial.println(light_level);

  while (light_level > 350) {
    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(buzzer, LOW);
    delay(200);

    light_level = analogRead(A4);
    Serial.println(light_level);
  }
}
