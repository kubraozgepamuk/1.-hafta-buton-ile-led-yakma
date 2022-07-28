int led=4;
int buton=10;

void setup() {
 pinMode(led, OUTPUT);
 pinMode(buton, INPUT);

}

void loop() {
  if(digitalRead(buton) == HIGH)
  digitalWrite(led, HIGH);
  else
  digitalWrite(led, LOW);
}
