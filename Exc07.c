#include <stdio.h>
#include<math.h>
//7. Desenvolva uma função que receba um número inteiro e determine se ele é par
//ou ímpar. Exiba uma mensagem correspondente para cada caso. (0.3 ponto)
 verif_numero(int numero) {
   if (numero%2==0)
     printf("O número é par\n");
   else
     printf("o número é ímpar\n");
 }

int main (void) {
int numero;
  printf("informe um número : ");
  scanf("%d",&numero);
  verif_numero(numero);
}