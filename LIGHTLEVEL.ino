int RED=2;
int YELLOW=3;
int WHITE=4;
int GREEN=5;
int BLUE=6;

int ANALOG=1;

void turn_off()
{
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
  digitalWrite(WHITE,LOW);
  digitalWrite(GREEN,LOW);
  digitalWrite(BLUE,LOW);

}


void setup() {
  // put your setup code here, to run once:
 pinMode(RED,OUTPUT);
 pinMode(YELLOW,OUTPUT);
 pinMode(WHITE,OUTPUT);
 pinMode(GREEN,OUTPUT);
 pinMode(BLUE,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  val= analogRead(ANALOG);
  if(val>=200) digitalWrite(RED,HIGH);
  if(val>=400) digitalWrite(YELLOW,HIGH);
  if(val>=600) digitalWrite(WHITE,HIGH);
  if(val>=800) digitalWrite(GREEN,HIGH);
  if(val>=1000) digitalWrite(BLUE,HIGH);
  if(val<=200) digitalWrite(RED,LOW);
  if(val<=400) digitalWrite(YELLOW,LOW);
  if(val<=600) digitalWrite(WHITE,LOW);
  if(val<=800) digitalWrite(GREEN,LOW);
  if(val<=1000) digitalWrite(BLUE,LOW);

}
