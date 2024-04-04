#include <stdio.h>

int main() {

  int segundos;

  printf("Digite um numero: ");
  int deu_certo = scanf("%i", &segundos);

  int minutos = segundos/60;
  int horas = minutos/ 60;

  printf("%i segundos corresponde a %i horas %i minutos\n", segundos,minutos,horas);

  



  
  return 0;
}