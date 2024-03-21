#include <stdio.h>

int main() {
 float nota1;
 float nota2;

  printf("PRIMEIRA NOTA:  ");
  scanf("%f", &nota1);

  printf("SEGUNDA NOTA:  ");
  scanf("%f", &nota2);

  float nota_final = 0.4*nota1 + 0.6*nota2;


  printf("NOTA FINAL É: %f", nota_final);

  

  return 0;
}