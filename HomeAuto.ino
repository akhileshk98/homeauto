#define LDRpin A1
int LDRValue = 0;
int irval=HIGH;
int ir=7;
void setup()
{
   Serial.begin(9600);
   pinMode(13, OUTPUT);
   pinMode(10,INPUT);
   pinMode(irval,INPUT);
 

}

void loop()
{
  
  LDRValue = analogRead(LDRpin); 
  Serial.println(LDRValue);
  irval=digitalRead(ir);
  Serial.println(irval);
  if (LDRValue<=265 && irval==LOW)
  {
    digitalWrite(13, HIGH);
   
  }
  else
  {
   digitalWrite(13, LOW);
    
  }
  delay(1000);

}