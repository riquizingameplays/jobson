// C++ code
//
const int led1= 2;
const int led2= 3;
const int led3= 4;
const int led4= 5;
const int led5= 6;
  
const int bot1= 7;
const int bot2= 8;
const int bot3= 9;
  
void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  
  pinMode(bot1,INPUT);
  pinMode(bot2,INPUT);
  pinMode(bot3,INPUT);
}

int var1;
int var2;
int var3;

void loop()
{
  var1 = digitalRead(bot1);
  var2 = digitalRead(bot2);
  var3 = digitalRead(bot3);
  
  if(var1){
    acendeTudo();
  }
  if(var2){
    apagaTudo();
  }
  if(var3){
    piscaTudo();
  }
}

void acendeTudo(){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
}
void apagaTudo(){
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  }
void piscaTudo(){
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);
  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led3, LOW);
  delay(1000);
  digitalWrite(led4, HIGH);
  delay(1000);
  digitalWrite(led4, LOW);
  delay(1000);
  digitalWrite(led5, HIGH);
  delay(1000);
  digitalWrite(led5, LOW);
  }  
