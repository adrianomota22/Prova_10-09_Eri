#include <stdio.h>
#include<math.h>
//10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor
//da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
//alíquotas progressivas para calcular o valor da contribuição:
//● Até R$ 1.320,00: 7,5%
//● De R$ 1.320,01 até R$ 2.571,29: 9%
//● De R$ 2.571,30 até R$ 3.856,94: 12%
//● De R$ 3.856,95 até R$ 7.507,49: 14%
//Use a estrutura condicional aninhada para calcular o desconto //corretamente. (0.4 ponto)

verif_funcao(float salario) {
float contribuicao;
if (salario<=1320.00) {
  contribuicao= (salario*0.075);
  printf("você contribuirá %.2f\n", contribuicao);
}else if (salario <= 2571.29) {
  contribuicao= (salario*0.09);
  printf("você contribuirá %.2f\n", contribuicao);
}else if (salario <= 3856.94){
  contribuicao=(salario*0.12);
  printf("você contribuirá %.2f\n", contribuicao);
}else if (salario <= 7507.94){
  contribuicao= (salario*0.14);
  printf("você contribuirá %.2f\n", contribuicao);
}
}

int main (void) {
float salario;
  printf("informe seu salário : ");
  scanf("%f", &salario);
  verif_funcao(salario);
}
  
  

