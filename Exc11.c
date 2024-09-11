#include <stdio.h>
#include<math.h>
//11. Crie uma função que receba o valor de um produto e calcule o valor //do desconto
//de ICMS com base nas faixas de preço do produto:
//● Até R$ 1.000,00: Desconto de 5%
//● De R$ 1.000,01 até R$ 5.000,00: Desconto de 10%
//● Acima de R$ 5.000,00: Desconto de 15%
//Use a estrutura condicional aninhada para aplicar o desconto corretamente. (0.4 ponto)

verif_funcao(float produto) {
float desconto;
  if (produto<=1000) {
    desconto= (produto*0.05);
} else if (produto <=5000) {
    desconto= (produto*0.10);
} else
    desconto= (produto*0.15);
    printf("o desconto será de %.2f\n", desconto);

}

int main (void) {
float produto;
  printf("informe o valor do produto\n : ");
  scanf("%f", &produto);
  verif_funcao(produto);
 } 
