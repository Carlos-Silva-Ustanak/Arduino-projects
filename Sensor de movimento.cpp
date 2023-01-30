int led = 9;
int sense = 2;

void setup(){
  
 pinMode(led, OUTPUT);
  pinMode(sense, INPUT);
  
}

void loop(){
  
  if(digitalRead(sense)==HIGH){
    
    digitalWrite(led, HIGH);
    delay(60000);
    
  }
  
  else if(digitalRead(sense)!=HIGH){
    
  
    digitalWrite(led, LOW);
    
  }
}