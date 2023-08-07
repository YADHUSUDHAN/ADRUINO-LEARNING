int ir = 6;
int x;
int BUZ = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  x = digitalRead(ir);
  Serial.println(x);
  if(x == 1)
  {
  	digitalWrite(BUZ,LOW);  
  }
  else
  {
  	digitalWrite(BUZ,HIGH);  
  }
  
}