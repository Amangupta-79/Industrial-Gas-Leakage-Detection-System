int gasSensor = A0;
int led = 8;
int buzzer = 9;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int gasValue = analogRead(gasSensor);

  if (gasValue > 400) {
    digitalWrite(led, HIGH);
    tone(buzzer, 1000);
  }
  else {
    digitalWrite(led, LOW);
    noTone(buzzer);
  }

  delay(200);
}
