#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Logica do Jogo

int main() {
    // Declaração das variáveis:
    char estado1[20], estado2[20];
    char codigo1[50], codigo2[50], cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2; 
    int Nturistico1, Nturistico2;
    double PIBilhao1, PIBilhao2, PIB1, PIB2; 
    float area1, area2, densi1, densi2, capita1, capita2,SuperPoder1,SuperPoder2;


    printf("------Bem vindo ao Cadastro do Super Trunfo de Cidades------\n\n");
    
    // Cadastrando as informações da primeira carta
    printf("***Cadastra Carta 1***\n");
    printf("Digite o Estado da Carta:\n");
    scanf("%s", estado1);
    printf("Digite o código da Carta:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da Cidade:\n");
    scanf("%s", cidade1);
    printf("Digite o número da população:\n");
    scanf("%ld", &populacao1);
    printf("Digite a Área territorial (km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB (em Bilhões de reais):\n");
    scanf("%lf", &PIBilhao1);
    printf("Digite o número de Pontos Turísticos:\n");
    scanf("%d", &Nturistico1);

    // Cadastrando as informações da segunda carta
    printf("***Cadastra Carta 2***\n");
    printf("Digite o Estado da Carta:\n");
    scanf("%s", estado2);
    printf("Digite o código da Carta:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da Cidade:\n");
    scanf("%s", cidade2);
    printf("Digite o número da população:\n");
    scanf("%ld", &populacao2);
    printf("Digite a Área territorial (km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB (em Bilhões de reais):\n");
    scanf("%lf", &PIBilhao2);
    printf("Digite o número de Pontos Turísticos:\n");
    scanf("%d", &Nturistico2);

    // Conversão do PIB em Bilhão para PIB em reais (em R$)
    PIB1 = PIBilhao1 * 1000000000;
    PIB2 = PIBilhao2 * 1000000000;

    // Cálculos para densidade e PIB per capita
    densi1 = populacao1 / area1;
    densi2 = populacao2 / area2;
    capita1 = PIB1 / populacao1;
    capita2 = PIB2 / populacao2;

    //Calculo para o Super poder
    SuperPoder1=(float)populacao1+area1+(float)PIBilhao1+(float)Nturistico1+capita1+1/densi1 ;
    SuperPoder2=(float)populacao2+area2+(float)PIBilhao2+(float)Nturistico2+capita2+1/densi2 ; 
    
    // Exibindo as informações das Cartas
    printf("-----Informações das cartas Cadastradas:----\n\n");
    printf("***Carta 1***\n");
    printf("Estado: %s\n", estado1);
    printf("Código de Carta: %s\n", codigo1);
    printf("População: %ld habitantes\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", PIBilhao1);
    printf("Pontos Turísticos: %d\n", Nturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densi1);
    printf("PIB per Capita: %.2f reais\n", capita1);
    printf("SuperPoder é %.2f\n\n",SuperPoder1);

    printf("***Carta 2***\n");
    printf("Estado: %s\n", estado2);
    printf("Código de Carta: %s\n", codigo2);
    printf("População: %ld habitantes\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", PIBilhao2);
    printf("Pontos Turísticos: %d\n", Nturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densi2);
    printf("PIB per Capita: %.2f reais\n", capita2);
    printf("SuperPoder é %.2f\n\n",SuperPoder2);

    //Comparando as cartas

    printf("*****Comparando as cartas****\n\n");

    if (populacao1>populacao2)
    {
        printf("Populaçao:%s tem maior populaçao\n",cidade1);
    }
    else {
        if(populacao1<populacao2){
            printf("Populaçao:%s tem maior populaçao\n",cidade2);
        }
        else{
            printf("Populaçao:%s e %s tem o mesmo numero de populaçao\n",cidade1,cidade2);
        }
    }
    if (area1>area2)
    {
        printf("Area:%s tem maior area\n",cidade1);
    }
    else {
        if(area1<area2){
            printf("Area:%s tem maior area\n",cidade2);
        }
        else{
            printf("Area:%s e %s tem a mesma area\n",cidade1,cidade2);
        }
    }
    if (PIBilhao1>PIBilhao2)
    {
        printf("PIB:%s tem maior PIB\n",cidade1);
    }
    else {
        if(PIBilhao1<PIBilhao2){
            printf("PIB:%s tem maior PIB\n",cidade2);
        }
        else{
            printf("PIB:%s e %s tem o mesmo PIB\n",cidade1,cidade2);
        }
    }
    if (Nturistico1>Nturistico2)
    {
        printf("Pontos turistico:%s tem mais p.turistico\n",cidade1);
    }
    else {
        if(Nturistico1<Nturistico2){
            printf("Pontos Turisticos:%s tem maior p.turistico\n",cidade2);
        }
        else{
            printf("Pontos turistico:%s e %s tem mesmo numero de p. turistico\n",cidade1,cidade2);
        }
    }
    if (densi1>densi2)
    {
        printf("Densidade populacional:%s tem maior densidade\n",cidade1);
    }
    else {
        if(densi1<densi2){
            printf("Densidade populacional:%s tem maior densidade\n",cidade2);
        }
        else{
            printf("Densidade populacional:%s e %s tem a mesma densidade\n",cidade1,cidade2);
        }
    }
    if (capita1>capita2)
    {
        printf("PIB per capita:%s tem PIB per capita maior\n",cidade1);
    }
    else {
        if(capita1<capita2){
            printf("PIB per capita:%s tem PIB per capita maior\n",cidade2);
        }
        else{
            printf("PIB per capita:%s e %s tem mesmo PIB per capita\n",cidade1,cidade2);
        }
    }
    if (SuperPoder1>SuperPoder2)
    {
        printf("SuperPoder:%s tem super poder maior\n\n",cidade1);
    }
    else {
        if(SuperPoder1<SuperPoder2){
            printf("SuperPoder:%s tem super poder maior\n\n",cidade2);
        }
        else{
            printf("SuperPoder: %s e %s tem o mesmo super poder\n\n",cidade1,cidade2);
        }
    }

    // Comparando os Atributos 


    printf("*****Comparando o Atributo escolhido****\n\n");
    if (populacao1>populacao2){
      printf("Carta 1: %ld habitantes\n",populacao1);
      printf("Carta 2: %ld habitantes\n",populacao2);
      printf("///Carta 1 Venceu///\n");
    }
    else{
      if (populacao1<populacao2){
        printf("Carta 1: %ld habitantes\n",populacao1);
        printf("Carta 2: %ld habitantes\n",populacao2);
        printf("///Carta 2 Venceu///\n");
      }
      else{
        printf("Carta 1: %ld habitantes\n",populacao1);
        printf("Carta 2: %ld habitantes\n",populacao2);
        printf("///Empate entre carta 1 e 2///\n");
      }
    }
    return 0;
}
