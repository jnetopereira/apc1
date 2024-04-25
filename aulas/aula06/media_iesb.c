#include <stdio.h>

int main(){

  float nota_1;
  float nota_2;

  printf("Entre com a nota 1:  ");
  int deu_certo = scanf("%f", &nota_1);

  int nota1_eh_valida = nota_1 >= 0.0f && nota_1 <= 10.0f;
  if (nota1_eh_valida) {
  
  printf("Entre com a nota 2:  ");
  deu_certo = scanf("%f", &nota_2);

  int nota2_eh_valida = nota_2 >= 0.0f && nota_2 <= 10.0f;
  if (nota2_eh_valida) {
    float media = 0.4f * nota_1 + 0.6f * nota_2;
    printf("A sua media eh %.1f\n", media);

    if(media >= 9.0f && media <= 10.0f)
  } else {
    printf("Nota invalida! Entre com um valor entre 0.0 e 10.0\n");
  }
  } else {
    printf("Nota invalida! Entre com um valor entre 0.0 e 10.0\n");
  }
 
  
  

  

  
  return 0;
}