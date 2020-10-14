//Se incluye la librearia para controlar el servomotor.
#include <Servo.h>

int option;

//Se crea un objeto de servo.
Servo myservo;

//Se crea variable para iniciar la posicion del servo.
int pos = 0;
 
void setup(){
  myservo.attach(9); //Se asigna el pin9 para controlar el servo.
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
 
void loop(){
  //si existe datos disponibles los leemos
  if (Serial.available()>0){
    
    //leemos la opcion enviada
    
    option=Serial.read();
    
    if(option=='1') {
      digitalWrite(LED_BUILTIN, LOW);
      myservo.write(0);
      Serial.println("OFF");
    }
    if(option=='4') {
      
      digitalWrite(LED_BUILTIN, HIGH);
      myservo.write(45);
      Serial.println("ON");
    }
    if(option=='5') {
      
      digitalWrite(LED_BUILTIN, LOW);
      myservo.write(90);
      Serial.println("ON");
    }
    if(option=='6') {
      
      digitalWrite(LED_BUILTIN, LOW);
      myservo.write(135);
      Serial.println("ON");
    }
    if(option=='3') {
      
      digitalWrite(LED_BUILTIN, LOW);
      myservo.write(180);
      Serial.println("ON");
    }
  }
}
