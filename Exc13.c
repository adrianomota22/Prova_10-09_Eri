#include <stdio.h>
#include<math.h>
//13. Crie um programa que simule uma calculadora simples. O programa deve
//permitir ao usuário escolher entre quatro operações aritméticas: soma, subtração,
//multiplicação e divisão. O usuário deve informar a operação desejada e dois
//números. O programa deve realizar a operação selecionada e exibir o resultado.
//Caso a operação não seja reconhecida, o programa deve informar um erro. (0.2ponto)

int main (void) {
  char operacao;
int numero1,numero2,soma,subtracao;
float multiplicacao,divisao;
  printf("informe qual operação vc deseja fazer : ");
  scanf(" %c", &operacao);
  printf("informe dois numeros : ");
  scanf("%d", &numero1, &numero2);
switch (operacao) {
  case 'u':
  soma=(numero1+numero2);
  printf("A soma será %d\n", soma);
  break;

case 'd': 
    if (numero2 != 0) {
      divisao = (numero1 / numero2);
      printf("O resultado da divisão é %.2f\n", divisao);
      } else {
        printf("Não é possível dividir por zero.\n");
      }
      break;
case 'm': 
    multiplicacao = numero1 * numero2;
    printf("A multiplicação é %.2f\n", multiplicacao);
    break;
case 's':
    subtracao= (numero1-numero2);
    printf("o resultado da subtracao é %d\n", subtracao);
  break;
}
    
}
