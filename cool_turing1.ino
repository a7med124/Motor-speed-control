// C++ code
//
int echo=5;
int trig=12;
int mottor=11;
long t,d ;
int speed;
void setup()
{
  pinMode(mottor,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig,LOW);
 delayMicroseconds(2);
  digitalWrite(trig,HIGH);
 delayMicroseconds(10);
    digitalWrite(trig,LOW);
  t=pulseIn(echo,HIGH);
  d=0.0343*(t/2);
  if(d>30&&d<250){
    speed = map(d,30,250,300,0);
    analogWrite(mottor,127);}
  else{
    analogWrite(mottor,0);}
  
  
  
 
}