// C++ code
//  by ing Eliasib Cadena M
//

//LIBRARIES:
#include <Servo.h> 

Servo servoCam1;
int angulo;
int tiempo;
void setup()
{
  Serial.begin(9600);//mostrar salidas
  servoCam1.attach(8);
  tiempo=100;

  //pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  angulo= 0;
  //paneo 1  
  while(angulo<=180){
    servoCam1.write(angulo);
    Serial.print("Angulo actual ");
    Serial.println(angulo);
    delay(tiempo);
    angulo +=2;
  }
  Serial.println("angulos completados");
  delay(6000);
  
  while(angulo >= 0 ){
    servoCam1.write(angulo);
    Serial.print("Angulo actual ");
    Serial.println(angulo);
    delay(tiempo);
    angulo -=2;
  }

}