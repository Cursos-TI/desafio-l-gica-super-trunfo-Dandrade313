#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Logica do Jogo

int main() {
    // Declaração das variáveis:
    char estado1[20], estado2[20];
    char codigo1[50], codigo2[50], cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2; 
    int Nturistico1, Nturistico2,escolha;
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

    // Comparando os Atributos 


    printf("*****Comparando o Atributo escolhido****\n\n");
    printf("1.Populaçao\n");
    printf("2.Area\n");
    printf("3.PIB\n");
    printf("4.Pontos Turisticos\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB per Capita\n");
    printf("7.Super Poder\n");
    printf("++Escolha o Atributo q deseja comparar?\n");
    scanf("%d",&escolha);
switch (escolha)
{
case 1:
printf("\nAtributo:Populaçao\n");
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
  break;

  case 2:
  printf("\nAtributo:Area\n");
  if (area1>area2){
    printf("Carta 1: %.2f Km²\n",area1);
    printf("Carta 2: %.2f Km²\n",area2);
    printf("///Carta 1 Venceu///\n");
  }
  else{
    if (area1<area2){
      printf("Carta 1: %.2f Km²\n",area1);
      printf("Carta 2: %.2f km²\n",area2);
      printf("///Carta 2 Venceu///\n");
    }
    else{
      printf("Carta 1: %.2f km²\n",area1);
      printf("Carta 2: %.2f km²\n",area2);
      printf("///Empate entre carta 1 e 2///\n");
    }
  }
    break;

    case 3:
    printf("\nAtributo:PIB\n");
    if (PIBilhao1>PIBilhao2){
        printf("Carta 1: %.2f Bilhões\n",PIBilhao1);
        printf("Carta 2: %.2f Bilhões\n",PIBilhao2);
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (PIBilhao1<PIBilhao2){
          printf("Carta 1: %.2f Bilhões\n",PIBilhao1);
          printf("Carta 2: %.2f Bilhões\n",PIBilhao2);
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("Carta 1: %.2f Bilhões\n",PIBilhao1);
          printf("Carta 2: %.2f Bilhões\n",PIBilhao2);
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;
      case 4:
      printf("\nAtributo:Pontos Turisticos\n");
      if (Nturistico1>Nturistico2){
        printf("Carta 1: %d Pontos Turisticos\n",Nturistico1);
        printf("Carta 2: %d Pontos Turisticos\n",Nturistico2);
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (Nturistico1<Nturistico2){
          printf("Carta 1: %d Pontos Turisticos\n",Nturistico1);
          printf("Carta 2: %d Pontos Turisticos\n",Nturistico2);
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("Carta 1: %d habitantes\n",Nturistico1);
          printf("Carta 2: %d habitantes\n",Nturistico2);
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;

      case 5:
      printf("\nAtributo:Densidade\n");
      if (densi1>densi2){
        printf("Carta 1: %.2f hab/km²\n",densi1);
        printf("Carta 2: %.2f hab/km²\n",densi2);
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (densi1<densi2){
          printf("Carta 1: %.2f hab/km²\n",densi1);
          printf("Carta 2: %.2f hab/km²\n",densi2);
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("Carta 1: %.2f hab/km²\n",densi1);
          printf("Carta 2: %.2f hab/km²\n",densi2);
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;
      
      case 6:
      printf("\nAtributo:PIB per Capita\n");
      if (capita1>capita2){
        printf("Carta 1: %.2f Reais\n",capita1);
        printf("Carta 2: %.2f Reais\n",capita2);
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (capita1<capita2){
          printf("Carta 1: %.2f Reais\n",capita1);
          printf("Carta 2: %.2f Reais\n",capita2);
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("Carta 1: %.2f Reais\n",capita1);
          printf("Carta 2: %.2f Reais\n",capita2);
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;

      case 7:
      printf("\nAtributo:Super Poder\n");
      if (SuperPoder1>SuperPoder2){
        printf("Carta 1: %.2f Super Poder\n",SuperPoder1);
        printf("Carta 2: %.2f Super Poder\n",SuperPoder2);
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (SuperPoder1<SuperPoder2){
          printf("Carta 1: %.2f Super Poder\n",SuperPoder1);
          printf("Carta 2: %.2f Super Poder\n",SuperPoder2);
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("Carta 1: %.2f Super Poder\n",SuperPoder1);
          printf("Carta 2: %.2f Super Poder\n",SuperPoder2);
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;

default:
printf("***Voce escolheu a opção errada****");
    break;
}
   
    return 0;
}