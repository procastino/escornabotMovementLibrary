// esta liña e precisa para poder usar a biblioteca
#include <Escornabot.h>
//esta liña crea un obxecto escornabot co nome que queiramos
Escornabot meuEscornabot;

//Ainda que o deixaremos baleiro, temos que poñer igual o setup()
void setup(){
   }

//dentro do loop van os movementos que quero que execute
void loop(){
  //poño esta liña para que o programa se execute cada vez que premo o boton
  meuEscornabot.siBotonIr();
  //o robot anda 10 cm cara adiante
  meuEscornabot.andaCm(10);
  // xira 60 graos en sentido horario
  meuEscornabot.xiraGraos(60);
  //anda 6 cm cara atras
  meuEscornabot.andaCm(-6);
  //para 2 segundos
  meuEscornabot.para(2000);
  //xira 60 graos en sentido antihorario
  meuEscornabot.xiraGraos(-60);
  //facemos un pitido de dous segundos
  meuEscornabot.pita(2000);
  
}
