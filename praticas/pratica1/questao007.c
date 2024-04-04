#include <stdio.h>
#include <math.h>
int main() {

  int distancia;
  int angulo;
  const float PI = 3.1415;

  printf("qual a distancia?");
  int deu_certo = scanf("%i", &distancia);
  
  printf("qual o angulo?");
  deu_certo = scanf("%i",&angulo);

  int altura = (distancia * (PI/angulo));
  printf("A altura alcançada por um aviao apos ter percorrido certa distancia e %i\n", altura);
  
  
  
  
  return 0;
}