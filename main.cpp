#include <iostream>
#include "headers/core.h"

int main(int argc, char **argv)
{
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
  glutInitWindowSize(640, 480);
  glutCreateWindow("Basic GL functionality");

  glutIgnoreKeyRepeat(0);


  glutDisplayFunc(Display);
    //other function assignemnts
    glutIdleFunc(Idle);
    glutTimerFunc(1,Timer,0);
  
  return 0;
}
