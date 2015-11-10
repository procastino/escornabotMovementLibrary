#include <Escornabot.h>
Escornabot grisu;

void setup(){
    
}

void loop()
{
  grisu.siBotonIr();  
    for (int i=0;i<5;i++){
      grisu.andaCm(23);
      grisu.xiraGraos(-144);
     }
  grisu.pita(200);
  grisu.para(500);
  grisu.pita(800);  
  }
