#include <stdio.h>
#include <math.h>

int main() {

  int a;
  int b;
  int c;

  printf ("Qual o valor de a?");
  int deu_certo =scanf("%i", &a);

  printf ("Qual o valor de b?");
  deu_certo = scanf ("%i", &b);
  
  printf ("Qual o valor de c?");
  deu_certo = scanf("%i", &c);

  double delta = pow(b, 2) - 4 * a * c;
  double baskara_positivo = (- b + sqrt(delta)) / 2 * a;
  double baskara_negativo = (- b - sqrt(delta)) / 2 * a;

  printf("Valor de delta é %f\n", delta);
  printf("Valor de baskara positivo é %f\n", baskara_positivo);
  printf("Valor de baskara negativo é %f\n", baskara_negativo);
  
  
  return 0;
}