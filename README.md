# escornabotMovementLibrary
Attempt to create a library for controlling escornabot with simple commands. It aims to be an educational tool for introducing programming to kids 8-14 years, so simplicity is fundamental. In Placidus version with a marker on its central hole, it could be used for drawing on the floor.
## List of commands:
### anda(steps)
Makes escornabot move that amount of steps.Negative steps give backward movements
### andaCm(cm)
Escornabot will move for that amount of cm. 
###  xira(steps)
Makes escornabot turn that amount of steps. Well, kind of, both motors move that amount of steps in different directions. Negative steps give counter-clockwise turns.
### xiraGraos(graos)
Escornabot will turn that amount of degrees.
###  para(time)
Stops moving for given time.
### pita(time)
Buzzer sounds for given time.
### siBotonIr()
Following orders will execute ONCE if "go" button is pressed. This button value must be defined in Escornabot.cpp file to work properly.
### nonRepetir()
Not ready yet, it would be for something like not repeating the program, but it fights with siBotonIr(). I have doubts here and a huge lack of knowledge 
## List of possible features
### Choose between loops and lineal
For the very beginner, maybe it's better to have a lineal program that doesn't execute infinitely. For more advanced users, using loops could be necessary. It would be good to make both behaviours available in a simple way.
### Sensors
With a very simple sensor (light sensor, endstop switch...) , it would be possible to program the escornabot to interact with its environment.
### Speeds
Making wheels turn at different speeds, it could be possible to create new activities.

