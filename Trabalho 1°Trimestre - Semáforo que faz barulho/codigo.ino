// C++ code
//
const int ledVermelho = 2;
const int ledAmarelo = 3;
const int ledVerde = 4;

const int buzzer = 5;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
}

void loop()
{
  digitalWrite(ledVermelho, HIGH);
  tone(buzzer,2000);
  delay(10000);
  digitalWrite(ledVermelho, LOW);
  noTone(buzzer);
  delay(500);
  
  digitalWrite(ledVerde, HIGH);
  delay(10000);
  digitalWrite(ledVerde, LOW);
  delay(500);
  
  digitalWrite(ledAmarelo, HIGH);
  delay(3000);
  digitalWrite(ledAmarelo, LOW);
  delay(500);
}
