// C++ code
//

const int bot1 = 0;
const int bot2 = 1;
const int bot3 = 2;

const int led1 = 3;
const int led2 = 4;
const int led3 = 5;
const int led4 = 6;
const int led5 = 7;
const int led6 = 8;
const int led7 = 9;
const int led8 = 10;
const int led9 = 11;
const int led10 = 12;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  
  pinMode(bot1, OUTPUT);
  pinMode(bot2, OUTPUT);
  pinMode(bot3, OUTPUT);
}

int var1;
int var2;
int var3;
int var4;
int var5;
int var6;
int var7;
  
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
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
}
void apagaTudo(){
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
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
    delay(1000);
  digitalWrite(led6, HIGH);
  delay(1000);
  digitalWrite(led6, LOW);
    delay(1000);
  digitalWrite(led7, HIGH);
  delay(1000);
  digitalWrite(led7, LOW);
    delay(1000);
  digitalWrite(led8, HIGH);
  delay(1000);
  digitalWrite(led8, LOW);
    delay(1000);
  digitalWrite(led9, HIGH);
  delay(1000);
  digitalWrite(led9, LOW);
    delay(1000);
  digitalWrite(led10, HIGH);
  delay(1000);
  digitalWrite(led10, LOW);
}
