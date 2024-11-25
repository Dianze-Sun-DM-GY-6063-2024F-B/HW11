int lastUpdate;
bool toggleState;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  lastUpdate = 0;
  toggleState = false;
}

void loop() {
  int now = millis();
  int seconds = (millis() / 1000) % 60;

  if (now > lastUpdate + 500) {
    lastUpdate = now;
    toggleState = !toggleState; 
  }

  // 控制 LED
  if (seconds < 10) {
    digitalWrite(2, toggleState ? HIGH : LOW); 
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  } else if (seconds >= 10 && seconds < 20) {
    digitalWrite(2, LOW);
    digitalWrite(3, toggleState ? HIGH : LOW); 
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  } else if (seconds >= 20 && seconds < 30) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, toggleState ? HIGH : LOW); 
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  } else if (seconds >= 30 && seconds < 40) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, toggleState ? HIGH : LOW); 
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  } else if (seconds >= 40 && seconds < 50) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, toggleState ? HIGH : LOW); 
    digitalWrite(7, LOW);
  } else if (seconds >= 50 && seconds < 60) {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, toggleState ? HIGH : LOW); 
  }
}
