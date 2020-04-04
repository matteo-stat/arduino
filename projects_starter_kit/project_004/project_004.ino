const int redledpin = 9;
const int greenledpin = 5;
const int blueledpin = 6;

const int redsensorpin = A2;
const int greensensorpin = A1;
const int bluesensorpin = A0;

int redvalue = 0;
int greenvalue = 0;
int bluevalue = 0;

int redsensorvalue = 0;
int greensensorvalue = 0;
int bluesensorvalue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(redledpin, OUTPUT);
  pinMode(greenledpin, OUTPUT);
  pinMode(blueledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  redsensorvalue = analogRead(redsensorpin);
  delay(5);
  greensensorvalue = analogRead(greensensorpin);
  delay(5);
  bluesensorvalue = analogRead(bluesensorpin);

  Serial.print("\r\nRaw sensor values \t red:");
  Serial.print(redsensorvalue);
  Serial.print("\t green: ");
  Serial.print(greensensorvalue);
  Serial.print("\t blue: ");
  Serial.print(bluesensorvalue);
  
  redvalue = redsensorvalue / 4;
  greenvalue = greensensorvalue / 4;
  bluevalue = bluesensorvalue / 4;

  Serial.print("\r\nMapped sensor values \t red:");
  Serial.print(redvalue);
  Serial.print("\t green: ");
  Serial.print(greenvalue);
  Serial.print("\t blue: ");
  Serial.print(bluevalue);

  analogWrite(redledpin, redvalue);
  analogWrite(greenledpin, greenvalue);
  analogWrite(blueledpin, bluevalue);

}
