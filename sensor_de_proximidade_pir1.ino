void setup(){
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
  digitalWrite(3, LOW);
}

void loop(){
  delay(100);
  if(digitalRead(4) == HIGH){
    digitalWrite(3, HIGH);
  }else{
    digitalWrite(3, LOW);
  }
}