const int led1 = 7;
const int bot1 = 4;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(bot1, INPUT);
}

int var1;
  
void loop()
{
  var1 = digitalRead(bot1);
  
  if(var1){
   digitalWrite(led1, LOW);
    
  }else{
   digitalWrite(led1, HIGH);
    
  }
  delay(10);
}
