int s = 6;
int x;
int LED1 = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(6, INPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  Serial.println(x);
  x = digitalRead(s);
  if(x == 0)
  {
  	digitalWrite(LED1,LOW);  
  }
  else
   {
  	digitalWrite(LED1,HIGH);  
  }
  
}