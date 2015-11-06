/* Library for programming escornabot's movements from a computer */

#ifndef Escornabot_h
#define Escornabot_h

#include "Arduino.h"

class Escornabot {
  public:  
    Escornabot ();
    void anda(int pasos);
    void xira(int pasos);
    void andaCm(int cm);
    void xiraGraos(int graos);
    void para(int tempo);
    void pita(int tempo);
    void motor_step(int8_t inc_left, int8_t inc_right);
    void nonRepetir();
    void siBotonIr();
    int botonIr;
    
};
#endif
