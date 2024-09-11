#include <stdio.h>
#include<math.h>
//2. Crie uma função que verifique se um ano fornecido é bissexto. Retorne 1 se for
//bissexto, caso contrário, a função não deve retornar nada. Um ano é bissexto se for
//divisível por 4, exceto os divisíveis por 100, a menos que também sejam divisíveis
//por 400. (0.1 ponto)
verif_ano(int ano) {
  if (ano%4==0 && ano%100!=0 || ano%400==0) {
    printf("1\n");
  }else
  return 0;
}

  int main(void) {
    int ano;
     printf("informe um ano : ");
     scanf("%d", &ano);
     verif_ano(ano);
  }
