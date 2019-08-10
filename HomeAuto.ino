void setup() {
  pinMode(1,OUTPUT);
}

void loop()
  {
  if (Serial.available())
  {
    char ch = Serial.read();
    if(ch=='A')
    {
      digitalWrite(1,LOW);
    }
  }
}
