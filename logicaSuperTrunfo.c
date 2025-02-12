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
    int pnt1 = 0, pnt2 = 0;
    
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
    printf("Digite o Código da segunda Cidade, Ex: A02 \n");
    scanf("%s", &Cod2);
    printf("Digite o Nome de cada Cidade: \n");
    scanf("%s", &nome1);
    scanf("%s", &nome2);
    printf("Digite a área da Cidade %s Ex: 123.456\n", nome1);
    scanf("%lf", &area1);
    printf("Digite a área da Cidade %s Ex: 123.456\n", nome2);
    scanf("%lf", &area2);
    printf("Digite o número da População da cidade %s Ex: 123456.78 \n", nome1);
    scanf("%lf", &pop1);
    printf("Digite o número da População da cidade %s Ex: 123456.78 \n", nome2);
    scanf("%lf", &pop2);
    printf("Digite o valor do PIB da Cidade %s, Ex: 98456.12\n", nome1);
    scanf("%lf", &PIB1);
    printf("Digite o valor do PIB da Cidade %s, Ex: 98456.12\n", nome2);
    scanf("%lf", &PIB2);
    printf("Digite a quantidade de pontos Turísticos da Cidade %s\n", nome1);
    scanf("%d", &PointT1);
    printf("Digite a quantidade de pontos Turísticos da Cidade %s\n", nome2);
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
    if (area1 > area2){
        printf("Cidade: %s tem maior população\n", nome1);
        pnt1++;
    }else {
        printf("Cidade: %s tem maior população\n", nome2);
        pnt2++;
    }
    if (pop1 > pop2){
        printf("Cidade %s tem maior população: %lf\n", nome1,pop1);
        pnt1++;
    }else {
        printf("Cidade %s tem maior população: %lf\n", nome2,pop2);
        pnt2++;
    }
    if (PIB1 > PIB2){
        printf("Cidade %s tem maior PIB: %lf\n", nome1,PIB1);
        pnt1++;
    }else {
        printf("Cidade %s tem maior PIB: %lf\n", nome2,PIB2);
        pnt2++;
    }
    if (PointT1 > PointT2){
        printf("Cidade %s tem maior quantidade de pnt1 Turísticos: %d \n", nome1,PointT1);
        pnt1++;
    }else {
        printf("Cidade %s Atem maior quantidade de pnt1 Turísticos: %d \n", nome2,PointT2);
        pnt2++;
    }
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    printf("Total Pontos -%s: - %d\n", nome1,pnt1);
    printf("Total Pontos -%s: - %d\n", nome2,pnt2);
    if (pnt1 > pnt2) {
        printf("A Cidade vencedora foi: %s\n", nome1);
    }else if (pnt1 == pnt2)
    {
        printf("### EMPATE ####:\n");
    }else {
        printf("A Cidade vencedora foi: %s\n", nome2);
    }
          
    return 0;
}
