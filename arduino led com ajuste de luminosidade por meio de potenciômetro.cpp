int led = 11;
int pot = A5;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop(){
  int valpot = analogRead(pot) / 4;
  
  analogWrite(led, valpot);
}