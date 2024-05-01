#define LED_ONE 7
#define LED_TWO 6
#define PHOTO_RES A0
#define LUMINOSITY 330
void setup(){
  Serial.begin(115200);
  pinMode(LED_ONE,OUTPUT);
  pinMode(LED_TWO,OUTPUT);
  pinMode(PHOTO_RES,INPUT);
  
}

void loop(){
  int value=analogRead(PHOTO_RES);
  if(value<LUMINOSITY){
    digitalWrite(LED_ONE,HIGH);
    digitalWrite(LED_TWO,HIGH);
  }
  else if(value>330 && value<700 ){
    digitalWrite(LED_ONE,HIGH);
    digitalWrite(LED_TWO,LOW);
  }
  else if(value>700 && value < 800){
     digitalWrite(LED_ONE,LOW);
    digitalWrite(LED_TWO,HIGH);
  }
  else if(value>800){
     digitalWrite(LED_ONE,LOW);
    digitalWrite(LED_TWO,LOW);
  }
}