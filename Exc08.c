#include <stdio.h>
#include<math.h>
//8. Elabore uma função que calcule o imposto sobre um salário com base no valor
//recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso
//contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser
//pago. (0.3 ponto)
verif_funcao(salario) {
float imposto;
if (salario>5000) {
    imposto= (salario*0.20);
    printf("o imposto será de %.2f\n", imposto);
}else
    imposto=(salario*0.10);
  printf("o imposto será de %.2f\n", imposto);
}
int main (void) {
float salario;
    printf("informe seu salario : ");
    scanf("%f", &salario);
    verif_funcao(salario);
}