#include <stdio.h>
#include<math.h>
//6. Elabore uma função que receba a nota de um aluno (de 0 a 10) e classifique se
//ele foi aprovado ou reprovado. A aprovação ocorre se a nota for 7 ou superior, e
//reprovação caso contrário. A função deve exibir mensagens para os dois casos. (0.3ponto)

verif_nota(int nota) {
 if (nota>= 7) 
  printf("você foi aprovado.");
 else 
    printf("você foi reprovado.");
}
 int main (void) {
int nota;
   printf("informe sua nota : ");
   scanf("%d", &nota);
   verif_nota(nota);
 }
  
