const int bot1 = 2;
const int bot2 = 3;
const int bot3 = 4;
const int bot4 = 5;
const int bot5 = 6;
const int bot6 = 7;
const int bot7 = 8;

void setup()
{
  pinMode(bot1, INPUT);
   Serial.begin(9600);
  pinMode(bot2, INPUT);
   Serial.begin(9600);
  pinMode(bot3, INPUT);
   Serial.begin(9600);
  pinMode(bot4, INPUT);
   Serial.begin(9600);
  pinMode(bot6, INPUT);
   Serial.begin(9600);
  pinMode(bot7, INPUT);
   Serial.begin(9600);
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
  var4 = digitalRead(bot4);
  var5 = digitalRead(bot5);
  var6 = digitalRead(bot6);
  var7 = digitalRead(bot7);
  
  if(var1){
    Serial.println("DÓ"); 
  }
  if(var2){
    Serial.println("RÉ"); 
  }
  if(var3){
    Serial.println("MI");
  }
  if(var4){
    Serial.println("FA");
  } 
  if(var5){
    Serial.println("SOL"); 
  }
  if(var6){
    Serial.println("LA");
  }
  if(var7){
    Serial.println("SI");
  }
}
