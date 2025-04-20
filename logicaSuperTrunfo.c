#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Logica do Jogo

int main() {
    // Declaração das variáveis:
    char estado1[20], estado2[20];
    char codigo1[50], codigo2[50], cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2; 
    int Nturistico1, Nturistico2,escolha1,escolha2;
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
    printf("++Escolha o Primeiro Atributo q deseja comparar?\n");
    scanf("%d",&escolha1);
    printf("++Escolha o Segundo Atributo q deseja comparar?\n");
    scanf("%d",&escolha2);

switch (escolha1)
{
case 1:
printf("\nAtributo:Populaçao\n");
printf("Carta 1: %ld habitantes\n",populacao1);
printf("Carta 2: %ld habitantes\n",populacao2);
if (populacao1>populacao2){
    printf("///Carta 1 Venceu///\n");
}
  else{
    if (populacao1<populacao2){
      printf("///Carta 2 Venceu///\n");
    }
    else{
      printf("///Empate entre carta 1 e 2///\n");
    }
  }
  break;

  case 2:
  printf("\nAtributo:Area\n");
  printf("Carta 1: %.2f Km²\n",area1);
  printf("Carta 2: %.2f Km²\n",area2);
  if (area1>area2){
    printf("///Carta 1 Venceu///\n");
  }
  else{
    if (area1<area2){
      printf("///Carta 2 Venceu///\n");
    }
    else{
      printf("///Empate entre carta 1 e 2///\n");
    }
  }
    break;

    case 3:
    printf("\nAtributo:PIB\n");
    printf("Carta 1: %.2f Bilhões\n",PIBilhao1);
    printf("Carta 2: %.2f Bilhões\n",PIBilhao2);
    if (PIBilhao1>PIBilhao2){
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (PIBilhao1<PIBilhao2){
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;
      case 4:
      printf("\nAtributo:Pontos Turisticos\n");
      printf("Carta 1: %d Pontos Turisticos\n",Nturistico1);
      printf("Carta 2: %d Pontos Turisticos\n",Nturistico2);
      if (Nturistico1>Nturistico2){
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (Nturistico1<Nturistico2){
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;

      case 5:
      printf("\nAtributo:Densidade\n");
      printf("Carta 1: %.2f hab/km²\n",densi1);
      printf("Carta 2: %.2f hab/km²\n",densi2);
      if (densi1<densi2){
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (densi1>densi2){
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;
      
      case 6:
      printf("\nAtributo:PIB per Capita\n");
      printf("Carta 1: %.2f Reais\n",capita1);
      printf("Carta 2: %.2f Reais\n",capita2);
      if (capita1>capita2){
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (capita1<capita2){
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;

      case 7:
      printf("\nAtributo:Super Poder\n");
      printf("Carta 1: %.2f Super Poder\n",SuperPoder1);
      printf("Carta 2: %.2f Super Poder\n",SuperPoder2);
      if (SuperPoder1>SuperPoder2){
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (SuperPoder1<SuperPoder2){
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;

default:
printf("***Voce escolheu a opção errada****");
    break;
}
   
switch (escolha2)
{
case 1:
printf("\nAtributo:Populaçao\n");
printf("Carta 1: %ld habitantes\n",populacao1);
printf("Carta 2: %ld habitantes\n",populacao2);
if (populacao1>populacao2){
    printf("///Carta 1 Venceu///\n");
  }
  else{
    if (populacao1<populacao2){
      printf("///Carta 2 Venceu///\n");
    }
    else{
      printf("///Empate entre carta 1 e 2///\n");
    }
  }
  break;

  case 2:
  printf("\nAtributo:Area\n");
  printf("Carta 1: %.2f Km²\n",area1);
  printf("Carta 2: %.2f Km²\n",area2);
  if (area1>area2){
    printf("///Carta 1 Venceu///\n");
  }
  else{
    if (area1<area2){
      printf("///Carta 2 Venceu///\n");
    }
    else{
      printf("///Empate entre carta 1 e 2///\n");
    }
  }
    break;

    case 3:
    printf("\nAtributo:PIB\n");
    printf("Carta 1: %.2f Bilhões\n",PIBilhao1);
    printf("Carta 2: %.2f Bilhões\n",PIBilhao2);
    if (PIBilhao1>PIBilhao2){
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (PIBilhao1<PIBilhao2){
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;
      case 4:
      printf("\nAtributo:Pontos Turisticos\n");
      printf("Carta 1: %d Pontos Turisticos\n",Nturistico1);
      printf("Carta 2: %d Pontos Turisticos\n",Nturistico2);
      if (Nturistico1>Nturistico2){
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (Nturistico1<Nturistico2){
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;

      case 5:
      printf("\nAtributo:Densidade\n");
      printf("Carta 1: %.2f hab/km²\n",densi1);
      printf("Carta 2: %.2f hab/km²\n",densi2);
      if (densi1<densi2){
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (densi1>densi2){
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;
      
      case 6:
      printf("\nAtributo:PIB per Capita\n");
      printf("Carta 1: %.2f Reais\n",capita1);
      printf("Carta 2: %.2f Reais\n",capita2);
      if (capita1>capita2){
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (capita1<capita2){
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;

      case 7:
      printf("\nAtributo:Super Poder\n");
      printf("Carta 1: %.2f Super Poder\n",SuperPoder1);
      printf("Carta 2: %.2f Super Poder\n",SuperPoder2);
      if (SuperPoder1>SuperPoder2){
        printf("///Carta 1 Venceu///\n");
      }
      else{
        if (SuperPoder1<SuperPoder2){
          printf("///Carta 2 Venceu///\n");
        }
        else{
          printf("///Empate entre carta 1 e 2///\n");
        }
      }
      break;

default:
printf("***Voce escolheu a opção errada****");
    break;
}

//Somas dos atributos

printf("***Soma dos atributos***\n\n ");

if (escolha1==1 && escolha2==2 || escolha1==2 && escolha2==1){
    if(populacao1+area1>populacao2+area2)
    {
        printf("Carta 1 = %.2f\n",populacao1+area1);
        printf("Carta 2 = %.2f\n",populacao2+area2);
        printf("----Carta 1 Venceu----");
    } else if(populacao2+area2>populacao1+area1){
        printf("Carta 1 = %.2f\n",populacao1+area1);
        printf("Carta 2 = %.2f\n",populacao2+area2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",populacao1+area1);
        printf("Carta 2 = %.2f\n",populacao2+area2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==1 && escolha2==3 || escolha1==3 && escolha2==1){
    if(populacao1+PIBilhao1>populacao2+PIBilhao2)
    {
        printf("Carta 1 = %.2f\n",populacao1+PIBilhao1);
        printf("Carta 2 = %.2f\n",populacao2+PIBilhao2);
        printf("----Carta 1 Venceu----");
    } else if(populacao2+PIBilhao2>populacao1+PIBilhao1){
        printf("Carta 1 = %.2f\n",populacao1+PIBilhao1);
        printf("Carta 2 = %.2f\n",populacao2+PIBilhao2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",populacao1+PIBilhao1);
        printf("Carta 2 = %.2f\n",populacao2+PIBilhao2);
        printf("-----EMPATE-----");
    }

}
else if(escolha1==1 && escolha2==4 || escolha1==4 && escolha2==1){
    if(populacao1+Nturistico1>populacao2+Nturistico2){
        printf("Carta 1 = %.2f\n",populacao1+Nturistico1);
        printf("Carta 2 = %.2f\n",populacao2+Nturistico2);
        printf("----Carta 1 Venceu----");
    } else if(populacao2+Nturistico2>populacao1+Nturistico1){
        printf("Carta 1 = %.2f\n",populacao1+Nturistico1);
        printf("Carta 2 = %.2f\n",populacao2+Nturistico2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",populacao1+Nturistico1);
        printf("Carta 2 = %.2f\n",populacao2+Nturistico2);
        printf("-----EMPATE-----");
    }
    
}
else if(escolha1==1 && escolha2==5 || escolha1==5 && escolha2==1){
    if(populacao1+densi1>populacao2+densi2)
    {
        printf("Carta 1 = %.2f\n",populacao1+densi1);
        printf("Carta 2 = %.2f\n",populacao2+densi2);
        printf("----Carta 1 Venceu----");
    } else if(populacao2+densi2>populacao1+densi2){
        printf("Carta 1 = %.2f\n",populacao1+densi1);
        printf("Carta 2 = %.2f\n",populacao2+densi2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",populacao1+densi1);
        printf("Carta 2 = %.2f\n",populacao2+densi2);
        printf("-----EMPATE-----");
    }
 
}
else if(escolha1==1 && escolha2==6 || escolha1==6 && escolha2==1){
    if(populacao1+capita1>populacao2+capita2)
    {
        printf("Carta 1 = %.2f\n",populacao1+capita1);
        printf("Carta 2 = %.2f\n",populacao2+capita2);
        printf("----Carta 1 Venceu----");
    } else if(populacao2+capita2>populacao1+capita1){
        printf("Carta 1 = %.2f\n",populacao1+capita1);
        printf("Carta 2 = %.2f\n",populacao2+capita2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",populacao1+capita1);
        printf("Carta 2 = %.2f\n",populacao2+capita2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==1 && escolha2==7 || escolha1==7 && escolha2==1){
    if(populacao1+SuperPoder1>populacao2+SuperPoder2)
    {
        printf("Carta 1 = %.2f\n",populacao1+SuperPoder1);
        printf("Carta 2 = %.2f\n",populacao2+SuperPoder2);
        printf("----Carta 1 Venceu----");
    } else if(populacao2+SuperPoder2>populacao1+SuperPoder1){
        printf("Carta 1 = %.2f\n",populacao1+SuperPoder1);
        printf("Carta 2 = %.2f\n",populacao2+SuperPoder2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",populacao1+SuperPoder1);
        printf("Carta 2 = %.2f\n",populacao2+SuperPoder2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==2 && escolha2==3 || escolha1==3 && escolha2==2){
    if(area1+PIBilhao1>area2+PIBilhao2)
    {
        printf("Carta 1 = %.2f\n",area1+PIBilhao1);
        printf("Carta 2 = %.2f\n",area2+PIBilhao2);
        printf("----Carta 1 Venceu----");
    } else if(area2+PIBilhao2>area1+PIBilhao1){
        printf("Carta 1 = %.2f\n",area1+PIBilhao1);
        printf("Carta 2 = %.2f\n",area2,+PIBilhao2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",area1+PIBilhao1);
        printf("Carta 2 = %.2f\n",area2+PIBilhao2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==2 && escolha2==4 || escolha1==4 && escolha2==2){
    if(area1+Nturistico1>area2+Nturistico2)
    {
        printf("Carta 1 = %.2f\n",area1+Nturistico1);
        printf("Carta 2 = %.2f\n",area2+Nturistico2);
        printf("----Carta 1 Venceu----");
    } else if(area2+Nturistico2>area1+Nturistico1){
        printf("Carta 1 = %.2f\n",area1+Nturistico1);
        printf("Carta 2 = %.2f\n",area2,+Nturistico2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",area1+Nturistico1);
        printf("Carta 2 = %.2f\n",area2+Nturistico2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==2 && escolha2==5 || escolha1==5 && escolha2==2){
    if(area1+densi1>area2+densi2)
    {
        printf("Carta 1 = %.2f\n",area1+densi1);
        printf("Carta 2 = %.2f\n",area2+densi2);
        printf("----Carta 1 Venceu----");
    } else if(area2+densi2>area1+densi1){
        printf("Carta 1 = %.2f\n",area1+densi1);
        printf("Carta 2 = %.2f\n",area2+densi2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",area1+densi1);
        printf("Carta 2 = %.2f\n",area2+densi2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==2 && escolha2==6 || escolha1==6 && escolha2==2){
    if(area1+capita1>area2+capita2)
    {
        printf("Carta 1 = %.2f\n",area1+capita1);
        printf("Carta 2 = %.2f\n",area2+capita2);
        printf("----Carta 1 Venceu----");
    } else if(area2+capita2>area1+capita2){
        printf("Carta 1 = %.2f\n",area1+capita1);
        printf("Carta 2 = %.2f\n",area2,+capita2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",area1+capita1);
        printf("Carta 2 = %.2f\n",area2+capita2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==2 && escolha2==7 || escolha1==7 && escolha2==2){
    if(area1+SuperPoder1>area2+SuperPoder2)
    {
        printf("Carta 1 = %.2f\n",area1+SuperPoder1);
        printf("Carta 2 = %.2f\n",area2+SuperPoder2);
        printf("----Carta 1 Venceu----");
    } else if(area2+SuperPoder2>area1+SuperPoder1){
        printf("Carta 1 = %.2f\n",area1+SuperPoder1);
        printf("Carta 2 = %.2f\n",area2,+SuperPoder2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",area1+SuperPoder1);
        printf("Carta 2 = %.2f\n",area2+SuperPoder2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==3 && escolha2==4 || escolha1==4 && escolha2==3){

    if(PIBilhao1+Nturistico1>PIBilhao2+Nturistico2)
    {
        printf("Carta 1 = %.2f\n",PIBilhao1+Nturistico1);
        printf("Carta 2 = %.2f\n",PIBilhao2+Nturistico2);
        printf("----Carta 1 Venceu----");
    } else if(PIBilhao2+Nturistico2>PIBilhao1+Nturistico2){
        printf("Carta 1 = %.2f\n",PIBilhao1+Nturistico2);
        printf("Carta 2 = %.2f\n",PIBilhao2+Nturistico2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",PIBilhao1+Nturistico1);
        printf("Carta 2 = %.2f\n",PIBilhao2+Nturistico2);
        printf("-----EMPATE-----");
    }

}
else if(escolha1==3 && escolha2==5 || escolha1==5 && escolha2==3){
    if(PIBilhao1+densi1>PIBilhao2+densi2)
    {
        printf("Carta 1 = %.2f\n",PIBilhao1+densi1);
        printf("Carta 2 = %.2f\n",PIBilhao2+densi2);
        printf("----Carta 1 Venceu----");
    } else if(PIBilhao2+densi2>PIBilhao1+densi1){
        printf("Carta 1 = %.2f\n",PIBilhao1+densi1);
        printf("Carta 2 = %.2f\n",PIBilhao2+densi2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",PIBilhao1+densi1);
        printf("Carta 2 = %.2f\n",PIBilhao2+densi2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==3 && escolha2==6 || escolha1==6 && escolha2==3){
    if(PIBilhao1+capita1>PIBilhao2+capita2)
    {
        printf("Carta 1 = %.2f\n",PIBilhao1+capita1);
        printf("Carta 2 = %.2f\n",PIBilhao2+capita2);
        printf("----Carta 1 Venceu----");
    } else if(PIBilhao2+capita2>PIBilhao1+capita1){
        printf("Carta 1 = %.2f\n",PIBilhao1+capita1);
        printf("Carta 2 = %.2f\n",PIBilhao2+capita2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",PIBilhao1+capita1);
        printf("Carta 2 = %.2f\n",PIBilhao2+capita2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==3 && escolha2==7 || escolha1==7 && escolha2==3){
    if(PIBilhao1+SuperPoder1>PIBilhao2+SuperPoder2)
    {
        printf("Carta 1 = %.2f\n",PIBilhao1+SuperPoder1);
        printf("Carta 2 = %.2f\n",PIBilhao2+SuperPoder2);
        printf("----Carta 1 Venceu----");
    } else if(PIBilhao2+SuperPoder2>PIBilhao1+SuperPoder1){
        printf("Carta 1 = %.2f\n",PIBilhao1+SuperPoder1);
        printf("Carta 2 = %.2f\n",PIBilhao2+SuperPoder2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",PIBilhao1+SuperPoder1);
        printf("Carta 2 = %.2f\n",PIBilhao2+SuperPoder2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==4 && escolha2==5 || escolha1==5 && escolha2==4){
    if(Nturistico1+densi1>Nturistico2+densi2)
    {
        printf("Carta 1 = %.2f\n",Nturistico1+densi1);
        printf("Carta 2 = %.2f\n",Nturistico2+densi2);
        printf("----Carta 1 Venceu----");
    } else if(Nturistico2+densi2>Nturistico1+densi1){
        printf("Carta 1 = %.2f\n",Nturistico1+densi1);
        printf("Carta 2 = %.2f\n",Nturistico2+densi2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",Nturistico1+densi1);
        printf("Carta 2 = %.2f\n",Nturistico2+densi2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==4 && escolha2==6 || escolha1==6 && escolha2==4){
    if(Nturistico1+capita1>Nturistico2+capita2)
    {
        printf("Carta 1 = %.2f\n",Nturistico1+capita1);
        printf("Carta 2 = %.2f\n",Nturistico2+capita2);
        printf("----Carta 1 Venceu----");
    } else if(Nturistico2+capita2>Nturistico1+capita1){
        printf("Carta 1 = %.2f\n",Nturistico1+capita1);
        printf("Carta 2 = %.2f\n",Nturistico2+capita2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",Nturistico1+capita1);
        printf("Carta 2 = %.2f\n",Nturistico2+capita2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==4 && escolha2==7 || escolha1==7 && escolha2==4){
    if(Nturistico1+SuperPoder1>Nturistico2+SuperPoder2)
    {
        printf("Carta 1 = %.2f\n",Nturistico1+SuperPoder1);
        printf("Carta 2 = %.2f\n",Nturistico2+SuperPoder2);
        printf("----Carta 1 Venceu----");
    } else if(Nturistico2+SuperPoder2>Nturistico1+SuperPoder1){
        printf("Carta 1 = %.2f\n",Nturistico1+SuperPoder1);
        printf("Carta 2 = %.2f\n",Nturistico2+SuperPoder2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",Nturistico1+SuperPoder1);
        printf("Carta 2 = %.2f\n",Nturistico2+SuperPoder2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==5 && escolha2==6 || escolha1==6 && escolha2==5){
    if(densi1+capita1>densi2+capita2)
    {
        printf("Carta 1 = %.2f\n",densi1+capita1);
        printf("Carta 2 = %.2f\n",densi2+capita2);
        printf("----Carta 1 Venceu----");
    } else if(densi2+capita2>densi1+capita1){
        printf("Carta 1 = %.2f\n",densi1+capita1);
        printf("Carta 2 = %.2f\n",densi2+capita2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",densi1+capita1);
        printf("Carta 2 = %.2f\n",densi2+capita2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==5 && escolha2==7 || escolha1==7 && escolha2==5){
    if(densi1+SuperPoder1>densi2+SuperPoder2)
    {
        printf("Carta 1 = %.2f\n",densi1+SuperPoder1);
        printf("Carta 2 = %.2f\n",densi2+SuperPoder2);
        printf("----Carta 1 Venceu----");
    } else if(densi2+SuperPoder2>densi1+SuperPoder1){
        printf("Carta 1 = %.2f\n",densi1+SuperPoder1);
        printf("Carta 2 = %.2f\n",densi2+SuperPoder2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",densi1+SuperPoder1);
        printf("Carta 2 = %.2f\n",densi2+SuperPoder2);
        printf("-----EMPATE-----");
    }
}
else if(escolha1==6 && escolha2==7 || escolha1==7 && escolha2==6){
    if(capita1+SuperPoder1>capita2+SuperPoder2)
    {
        printf("Carta 1 = %.2f\n",capita1+SuperPoder1);
        printf("Carta 2 = %.2f\n",capita2+SuperPoder2);
        printf("----Carta 1 Venceu----");
    } else if(capita2+SuperPoder2>capita1+SuperPoder1){
        printf("Carta 1 = %.2f\n",capita1+SuperPoder1);
        printf("Carta 2 = %.2f\n",capita2+SuperPoder2);
        printf("----Carta 2 Venceu----");  
    }else{
        printf("Carta 1 = %.2f\n",capita1+SuperPoder1);
        printf("Carta 2 = %.2f\n",capita2+SuperPoder2);
        printf("-----EMPATE-----");
    }
}


return 0;
}
