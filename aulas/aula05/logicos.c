#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um numero:  ");
  int deu_certo = scanf("%i", &numero);

  int maior_que_0_e_menor_que_10 = numero > 0 && numero < 10;
  printf("0 < numero < 10 ?%i\n", maior_que_0_e_menor_que_10);

  int menor_que_0_ou_maior_que_10 = numero < 0 || numero > 10;
  printf("numero < 0 ou numero > 10 %i", menor_que_0_ou_maior_que_10);

  int nao_eh_menor_que_0 = !(numero < 0);
  printf("numero nao <0 %i\n", nao_eh_menor_que_0);
  
    
  return 0;
}