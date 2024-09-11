#include <stdio.h>
#include<math.h>
//14. Elabore um programa que exiba uma mensagem de boas-vindas baseada no
//turno do dia. O usuário deve informar o turno usando um número (1 para manhã, 2
//para tarde, 3 para noite). O programa deve exibir uma mensagem apropriada para
//cada turno e um erro para entradas inválidas. (0.2 ponto)

int main (void) {
int turno;
  printf("informe seu turno\n : ");
  scanf("%d", &turno);
if (turno==1) {
  printf("Bom dia\n");
}else if (turno==2){
  printf("boa tarde\n");
}else
  printf("boa noite\n");
  
}