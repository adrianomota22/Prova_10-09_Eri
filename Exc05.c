#include <stdio.h>
#include<math.h>
//5. Crie uma função que receba a idade de uma pessoa e verifique se ela é maior de
//idade (18 anos ou mais). A função deve exibir uma mensagem diferente para os
//casos em que a pessoa é maior ou menor de idade. (0.3 ponto)
verif_idade(int idade) { 
 if (idade>=18 ) 
   printf("Você é maior de idade\n");
 else
   printf("você é menor de idade\n");
}

int main (void) {
int idade;
  printf("informe sua idade : ");
  scanf("%d", &idade);
  verif_idade(idade);
}
  
