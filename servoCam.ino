#include <Servo.h>

Servo servoCam1;
int angulo;
int tiempo;

void setup() {
  Serial.begin(9600);
  servoCam1.attach(8);
  tiempo = 100;
}

void loop() {
  // Primer movimiento de 0 a 180 grados
  for (angulo = 0; angulo <= 180; angulo += 2) {
    servoCam1.write(angulo);
    Serial.print("Angulo actual ");
    Serial.println(angulo);
    delay(tiempo);
  }

  Serial.println("Primer movimiento completado");
  delay(6000);

  // Segundo movimiento de 180 a 0 grados con pausa cada 45 grados
  for (angulo = 180; angulo >= 0; angulo -= 2) {
    servoCam1.write(angulo);
    Serial.print("Angulo actual ");
    Serial.println(angulo);
    delay(tiempo);

    // Agregar pausa de 3 segundos cada 45 grados
    if (angulo % 30 == 0) {
      Serial.println("Pausa de 30 segundos");
      delay(20000);
    }
  }
  Serial.print("fin de 45 grados ");

  Serial.println("Segundo movimiento completado");
  //delay(6000);

  // Tercer movimiento de 0 a 180 grados
  ///for (angulo = 0; angulo <= 180; angulo += 2) {
    //servoCam1.write(angulo);
    //Serial.print("Angulo actual ");
    //Serial.println(angulo);
    //delay(tiempo);
  //}

  Serial.println("Tercer movimiento completado");
  //delay(6000);
}
