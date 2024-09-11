#include <stdio.h>
#include<math.h>
//3. Crie uma função que receba três lados de um triângulo e verifique se esses lados
//formam um triângulo válido. Um triângulo é válido se a soma de dois de seus lados
//for sempre maior que o terceiro. Caso o triângulo seja válido, a função deverá
//retornar 1. Caso contrário, não deve retornar nada. (0.1 ponto
verif_triangulo(int lado1, int lado2, int lado3) {
  if (lado1+lado2>lado3 && lado2+lado3>lado1 && lado3+lado1>lado2) 
    printf("1\n");
  else
    printf("esse nao é um triangulo válido\n");
}
  int main (void) {
  
  int lado1,lado2,lado3;
    printf("informe 3 lados para o triângulo : ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    verif_triangulo(lado1,lado2,lado3);

  }