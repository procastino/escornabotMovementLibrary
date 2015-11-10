// isto inclue a biblioteca escornabot e crea un obxecto escornabot... podes chamarlle como queiras!
#include <Escornabot.h>
Escornabot romeo;
//defino o numero de escalons
int numeroEscalons=2;
void setup(){
   
}

void loop(){
  romeo.siBotonIr();
  for (int i=0; i<numeroEscalons; i++){
    romeo.andaCm(10);
    romeo.xiraGraos(-90);
    romeo.andaCm(10);
    romeo.xiraGraos(90);
    }
  romeo.pita(200);
}
