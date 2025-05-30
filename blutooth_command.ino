
#define START_PIN 7
#define STOP_PIN 9

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(START_PIN, OUTPUT);
  pinMode(STOP_PIN, OUTPUT);
  digitalWrite(START_PIN, HIGH);
  digitalWrite(STOP_PIN, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    String command = Serial.readStringUntil('\n');
    command.trim();


    if (command.equalsIgnoreCase("start motor")) {
      delay(200);
      digitalWrite(STOP_PIN, LOW);
      delay(1000);
      digitalWrite(START_PIN, LOW);
      delay(1000);
      digitalWrite(START_PIN, HIGH);
    } else if (command.equalsIgnoreCase("stop motor")) {
      digitalWrite(START_PIN, LOW);
      delay(200);
      digitalWrite(START_PIN, HIGH);
    } else if (command.equalsIgnoreCase("emergency") || command.equalsIgnoreCase("shutdown")) {
      digitalWrite(START_PIN, LOW);
      delay(200);
      digitalWrite(START_PIN, HIGH);
    }
  }
}
