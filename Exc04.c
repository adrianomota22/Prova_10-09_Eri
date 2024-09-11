#include <stdio.h>
#include<math.h>
//4. Elabore uma função que receba três lados de um triângulo e verifique se ele é um
//triângulo retângulo. Um triângulo é retângulo se o quadrado da hipotenusa (o maior
//lado) for igual à soma dos quadrados dos outros dois lados. Caso o triângulo seja
//retângulo, a função deverá informar ao usuário que o triângulo é retângulo, caso
//contrário, não deverá fazer nada. (0.1 ponto

verif_triangulo(int lado1, int lado2, int lado3){
  int a,b,c;
  if (lado1 >= lado2 && lado1 >= lado3){
  a=lado1;
  b=lado2;
  c=lado3;
  } else if (lado2 >= lado1 && lado2 >= lado3){
  a=lado2;
  b=lado1;
  c=lado3;
  }else  (lado3 >= lado1 && lado3 >= lado2);
   a=lado3;
   b=lado1;
   c=lado2;
  
    
  if (a*a== b*b + c*c)
    printf("esse é um triangulo retângulo\n");

}

  int main (void) {
    int lado1,lado2,lado3;
      printf("informe três lados para o triângulo\n : ");
      scanf("%d %d %d", &lado1, &lado2, &lado3);
    verif_triangulo(lado1,lado2,lado3);
  }
  
  
