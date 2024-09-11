#include <stdio.h>
#include<math.h>
//1. Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
 // for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
 // por essa razão, limite a verificação a um conjunto pequeno de números para
 // verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo
   verificarprimo(int numero) {
     if (numero<1 || numero>10) {
       printf("não é um número válido.");
    }if (numero==2|| numero==3 || numero==5 || numero==7) {
       printf ("1\n");
    }else 
      return 0;
   }
int main (void) {
int numero;
    printf("informe um número de 1 a 10 : ");
    scanf("%d", &numero);
  verificarprimo(numero);
}
  
