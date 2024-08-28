int led=7;
int ir=4;
void setup(){
  pinMode(led,OUTPUT);
  pinMode(led,INPUT);
}
void loop(){
  int ns=digitalRead(ir);
  if(ns==1){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}
