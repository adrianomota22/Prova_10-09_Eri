#include <stdio.h>
#include<math.h>
//16. Desenvolva um programa que classifique o desempenho acadêmico de um
//aluno com base em sua nota final. A nota deve ser informada pelo usuário e
//classificada da seguinte forma:
//● A (nota >= 9.0)
//● B (nota >= 7.0 e < 9.0)
//● C (nota >= 5.0 e < 7.0)
//● D (nota < 5.0)
//O programa deve exibir a classificação correspondente. Se a nota estiver fora do
//intervalo de 0 a 10, o programa deve informar um erro. (0.2 ponto
int main() {
    float nota;

    // Solicita a nota final ao usuÃ¡rio
    printf("Informe a nota final do aluno (0 a 10): ");
    scanf("%f", &nota);

    // Verifica se a nota estÃ¡ dentro do intervalo vÃ¡lido
    if (nota < 0 || nota > 10) {
        printf("Erro: Nota invalida. A nota deve estar entre 0 e 10.\n");
    } else {
        // Classifica a nota com base nas faixas
        if (nota >= 9.0) {
            printf("Classificacao: A\n");
        } else if (nota >= 7.0) {
            printf("Classificacao: B\n");
        } else if (nota >= 5.0) {
            printf("Classificacao: C\n");
        } else {
            printf("Classificacao: D\n");
        }
    }

    return 0;
}