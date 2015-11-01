/* Library for programming escornabot's movements from a computer */

#ifndef Escornabot_h
#define Escornabot_h

#include "Arduino.h"

class Escornabot {
  public:  
    Escornabot ();
    void anda(int pasos);
    void xira(int pasos);
    void para(int tempo);
    void motor_step(int8_t inc_left, int8_t inc_right);
    const static uint8_t step_pattern[];
    int8_t index_left, index_right;
    int8_t inc_motor_esq , inc_motor_der;
};
#endif
