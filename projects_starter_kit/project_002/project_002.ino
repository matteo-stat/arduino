int switchState = 0;

void setup() {
  // input
  pinMode(2, INPUT);

  // output
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // read pin
  switchState = digitalRead(2);

  if(switchState == LOW){
    // write pin
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    }
  else {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    // wait specified milliseconds
    delay(250);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    }

}
