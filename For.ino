int pinoBotao = 7;
int pinoLed = 12;
void setup()
{
  pinMode(pinoBotao, INPUT);
  pinMode(pinoLed, OUTPUT);
}
void loop()
{ 
  int conta;
  int estadoBotao = digitalRead(pinoBotao);
  if(estadoBotao == HIGH){
    for(conta = 0; conta <= 5; conta ++){
  		digitalWrite(pinoLed, HIGH);
  		delay(500); 
  		digitalWrite(pinoLed, LOW);
  		delay(500);
    }
  }
}