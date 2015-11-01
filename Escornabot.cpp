#include <Arduino.h>
#include "Escornabot.h"

Escornabot::Escornabot(){
#define STEPPERS_MOTOR_RIGHT_IN1 5
#define STEPPERS_MOTOR_RIGHT_IN2 4
#define STEPPERS_MOTOR_RIGHT_IN3 3
#define STEPPERS_MOTOR_RIGHT_IN4 2
#define STEPPERS_MOTOR_LEFT_IN1 9
#define STEPPERS_MOTOR_LEFT_IN2 8
#define STEPPERS_MOTOR_LEFT_IN3 7
#define STEPPERS_MOTOR_LEFT_IN4 6
#define RETARDO_PASO 1000

}

void Escornabot::motor_step(int8_t inc_left, int8_t inc_right)
{
  uint8_t pattern;
  index_left=0;
  index_right=0;
  const static uint8_t step_pattern[] = 
  {    B00001, B00011, B00010, B00110, B00100, B01100, B01000, B01001 };
  
  if(inc_left==0) pattern=0; else pattern=step_pattern[index_left];
  digitalWrite(STEPPERS_MOTOR_LEFT_IN1, bitRead(pattern, 0));
  digitalWrite(STEPPERS_MOTOR_LEFT_IN2, bitRead(pattern, 1));
  digitalWrite(STEPPERS_MOTOR_LEFT_IN3, bitRead(pattern, 2));
  digitalWrite(STEPPERS_MOTOR_LEFT_IN4, bitRead(pattern, 3));
  //incremento cíclico da variable índice (módulo 8)
  //se o incremento é -1 súmase 8 para que a resta quede positiva
  index_left += inc_left + 8; 
  index_left %= 8;
  
  if(inc_right==0) pattern=0; else pattern=step_pattern[index_right];
  digitalWrite(STEPPERS_MOTOR_RIGHT_IN1, bitRead(pattern, 0));
  digitalWrite(STEPPERS_MOTOR_RIGHT_IN2, bitRead(pattern, 1));
  digitalWrite(STEPPERS_MOTOR_RIGHT_IN3, bitRead(pattern, 2));
  digitalWrite(STEPPERS_MOTOR_RIGHT_IN4, bitRead(pattern, 3));
  //incremento cíclico da variable índice (módulo 8)
  //se o incremento é -1 súmase 8 para que a resta quede positiva
  index_right += inc_right + 8; 
  index_right %= 8;
  
  delayMicroseconds(RETARDO_PASO);
  
}
void Escornabot::anda(int pasos){
  if (pasos>0){
    inc_motor_esq=-1;
    inc_motor_der=1;
  }
  if (pasos<0){
    pasos=abs(pasos);
    inc_motor_esq=1;
    inc_motor_der=-1;
  }  
  for(int contpasos=0; contpasos<pasos; contpasos++){
    motor_step(inc_motor_esq,inc_motor_der);
   }
}

void Escornabot::xira(int pasos){
  
  if (pasos>0){
    inc_motor_esq=-1;
    inc_motor_der=-1;
  }
  if (pasos<0){
    pasos=abs(pasos);
    inc_motor_esq=1;
    inc_motor_der=1;
  }
  for(int contpasos=0; contpasos<pasos; contpasos++){
    motor_step(inc_motor_esq,inc_motor_der);
  }  
}

void Escornabot::para(int tempo){
  delay(tempo);
}



