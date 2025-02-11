#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char Estado;
    char Cod1[3], Cod2[3];
    char nome1[50], nome2[50];
    int PointT1, PointT2;
    double area1, area2;
    double  pop1, pop2;
    double PIB1, PIB2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // (Repita para cada propriedade)
    printf("Digite o Código de cada Cidade, Ex: A01 \n");
    scanf("%s", &Cod1);
    scanf("%s", &Cod2);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nome1);
    scanf("%s", &nome2);
    printf("Digite a área da Cidade, Ex: 123.456\n");
    scanf("%lf", &area1);
    scanf("%lf", &area2);
    printf("Digite o número da População Ex: 123456.78 \n");
    scanf("%lf", &pop1);
    scanf("%lf", &pop2);
    printf("Digite o valor do PIB da Cidade, Ex: 98456.12\n");
    scanf("%lf", &PIB1);
    scanf("%lf", &PIB2);
    printf("Digite a quantidade de Pontos Turísticos da Cidade\n");
    scanf("%d", &PointT1);
    scanf("%d", &PointT2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    if (area1 > area2)
    {
        printf("Cidade: %s tem maior população\n", nome1);
    }else
    {
        printf("Cidade: %s tem maior população\n", nome2);
    }
    if (pop1 > pop2)
    {
        printf("Cidade %s tem maior população: %lf\n", nome1,pop1);
    }else
    {
        printf("Cidade %s tem maior população: %lf\n", nome2,pop2);
    }
    if (PIB1 > PIB2)
    {
        printf("Cidade %s tem maior PIB: %lf\n", nome1,PIB1);
    }else
    {
        printf("Cidade %s tem maior PIB: %lf\n", nome2,PIB2);
    }
    if (PointT1 > PointT2)
    {
        printf("Cidade %s tem maior quantidade de Pontos Turísticos: %d \n", nome1,PointT1);
    }else
    {
        printf("Cidade %s Atem maior quantidade de Pontos Turísticos: %d \n", nome2,PointT2);
    }
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
