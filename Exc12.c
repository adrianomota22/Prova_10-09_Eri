#include <stdio.h>
#include<math.h>
//12. Desenvolva uma função que receba o valor venal de um imóvel e calcule o valor
//do IPTU com base na tabela abaixo:
//● Até R$ 100.000,00: Alíquota de 1%
//● De R$ 100.000,01 até R$ 300.000,00: Alíquota de 1,5%
//● De R$ 300.000,01 até R$ 500.000,00: Alíquota de 2%
//● Acima de R$ 500.000,00: Alíquota de 2,5%
//Use a estrutura condicional aninhada para aplicar a alíquota corretamente. (0.4
//ponto)
verif_funcao(float imovel) {
float iptu;
if (imovel<=10000000) {
  iptu= (imovel*0.01);
}else if (imovel<=300000.00) {
  iptu = (imovel*0.015);
}else if (imovel<=500000.00) {
  iptu=(imovel*0.02);
} else
  iptu = (imovel*0.025);
  printf("o valor do iptu será de %.2f\n", iptu);

}

int main(void) {
float imovel;
  printf("informe o valor do seu imóvel : ");
  scanf("%f", &imovel);
  verif_funcao(imovel);
}
  
  
  
