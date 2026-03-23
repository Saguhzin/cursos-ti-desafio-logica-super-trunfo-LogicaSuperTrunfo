#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
  
// ==================================================================================
//  JOGO SUPER TRUNFU DE CIDADES
// ==================================================================================
    
    // ==================================================================================
    // Variaveis Carta1 :
    // ==================================================================================
                   //obs : codigoCarta[4] Pq temos \0 no fim da linha.
      char estado = 'S', codigoCarta[4] = "S01", nomeCidade[30] = "Sao Paulo";
      
      unsigned long int populacao = 12300000;
      int pontosTuristicos = 15;
      
      float areaKm = 1521.11, pib = 699.28, densidadePopulacional, pibPercapta, superPoder;
    
    // ==================================================================================
    // Variaveis Carta2 :
    // ==================================================================================

      char estado2 = 'R', codigoCarta2[4] = "R04", nomeCidade2[30] = "Rio De Janeiro";

      unsigned long int populacao2 = 6775000;
      int pontosTuristicos2 = 12;
      
      float areaKm2 = 12000.25, pib2 = 407.12, densidadePopulacional2, pibPercapta2, superPoder2;

    // ==================================================================================
    // Variaveis Resposta :
    // ==================================================================================  
      
      int escolhaAtributo, escolhaAtributo2; //Escolha do atributo feita pelo usuario
      
       float carta1resultado = 0, carta2resultado = 0;//Pontuacao de cada carta 

      char continuar, continuar2; //Resposta se quer continuar apos resultado do round:
    

  
  // =========================
  // Calculos :
  // =========================
    
      densidadePopulacional = (float)populacao/areaKm;
      densidadePopulacional2 = (float)populacao2/areaKm2;

      pibPercapta = (float)(pib * 1000000000) / populacao;
      pibPercapta2 = (float)(pib2 * 1000000000) / populacao2;
      // Quem tem = Vira + ;
      float inverso = 1.0 / densidadePopulacional;
      float inverso2 = 1.0 / densidadePopulacional2;

      superPoder = (float)populacao + areaKm + pib + pontosTuristicos + pibPercapta + inverso;
      superPoder2 = (float)populacao2 + areaKm2 + pib2 + pontosTuristicos2 + pibPercapta2 + inverso2;

  // =========================
  // Exibicao das Cartas :
  // =========================
     
    // =========================
    // Primeira Carta : 
    // =========================
  
      printf("\n1 - Carta : \n\n");
      

      printf("Estado : %c \n", estado);

      printf("Código Da Carta: %s \n" , codigoCarta);
      
      printf("Nome Da Cidade : %s", nomeCidade);
      //obs n contem "/n" pois fgets() guarda "/n" ou seja o enter.
      
      printf("\nPopulação : %lu \n", populacao);
      
      printf("Área(Km²) :  %.2f \n", areaKm);
      
      printf("PIB :  %.2f  \n", pib);
      
      printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);
      
      printf("Densidade Populacional: %.2f  hab/km²\n", densidadePopulacional);
      
      printf("Pib Percapta :  %.2f  \n", pibPercapta);

      printf("Super Poder :  %.2f  \n", superPoder);
    
    // =========================
    // Segunda Carta : 
    // =========================

      printf("\n\n2 - Carta : \n\n");
      
      printf("Estado : %c \n", estado2);

      printf("Código Da Carta : %s \n" , codigoCarta2);
      
      printf("Nome Da Cidade : %s", nomeCidade2); 
      
      printf("\nPopulação : %lu \n", populacao2);
      
      printf("Área(Km²) :  %.2f \n", areaKm2);
      
      printf("PIB :  %.2f  \n", pib2);
      
      printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);

      printf("Densidade Populacional:  %.2f  hab/km²\n", densidadePopulacional2);
      
      printf("Pib Percapta :  %.2f  \n", pibPercapta2);
      
      printf("Super Poder :  %.2f  \n", superPoder2);

    // ===========================================================================
    // Resultado da Batalha : 
    // ===========================================================================

      

    //========= Menu interativo 1 ============
      printf("\n\n\n\n\n");
      printf("Escolha um atributo para comparar : ");
      printf("\n\n1. População");
      printf("\n2. Área");
      printf("\n3. PIB");
      printf("\n4. Número de Pontos Turisticos");
      printf("\n5. Densidade Populacional");
      printf("\n\nR : ");
      scanf("%d", &escolhaAtributo);
      printf("\n\n\n\n\n");
      switch(escolhaAtributo)
      {


      // ==================Populacao : ====================================================
      
      case 1:

        printf("\n\n Comparação de cartas (Atributo: População): ");

        printf("\n\n    %s (%s) : %lu ", nomeCidade, codigoCarta, populacao);

        printf("\n    %s (%s) : %lu ", nomeCidade2, codigoCarta2, populacao2);
        
        if (populacao > populacao2) 
        {
          printf("\n\n Resultado :   Carta 1 : %s Ganhou!! \n\n", nomeCidade);
          
        }
        else if(populacao == populacao2)
        {
          printf("\n\n Resultado :   Empate !! \n\n");
         
        }
        else 
        {
          printf("\n\n Resultado :   Carta 2 : %s Ganhou!! \n\n", nomeCidade2);
          
        }
        // ========== Armazena o Resultado ====================
        carta1resultado += (float)populacao;
        carta2resultado +=(float) populacao2;
      break;
      

    // ================== Area : ====================================================
        
      case 2 :

        printf("\n\n Comparação de cartas (Atributo: Área(Km²)): ");

        printf("\n\n    %s (%s) : %.2f ", nomeCidade, codigoCarta, areaKm);

        printf("\n    %s (%s) : %.2f ", nomeCidade2, codigoCarta2, areaKm2);
        
        if (areaKm > areaKm2)
        {
          printf("\n\n Resultado :   Carta 1 : %s Ganhou!! \n\n", nomeCidade);
          
        }
        else if (areaKm == areaKm2)
        {
          printf("\n\n Resultado :   Empate !! \n\n");
        }
        else 
        {
          printf("\n\n Resultado :   Carta 2 : %s Ganhou!! \n\n", nomeCidade2);
        }
        // ========== Armazena o Resultado ====================
        carta1resultado +=(float) areaKm;
        carta2resultado +=(float) areaKm2;

        break;

    // ================== Pib : ====================================================
      
      case 3 :

        printf("\n\n Comparação de cartas (Atributo:Pib) : ");

        printf("\n\n    %s (%s) : %.2f ", nomeCidade, codigoCarta, pib);

        printf("\n    %s (%s) : %.2f ", nomeCidade2, codigoCarta2, pib2);
        
        if(pib > pib2) 
        {
          printf("\n\n Resultado :   Carta 1 : %s Ganhou!! \n\n", nomeCidade);
        }
        else if (pib == pib2)
        {
          printf("\n\n Resultado :   Empate !! \n\n");
        }        
        else 
        {
          printf("\n\n Resultado :   Carta 2 : %s Ganhou!! \n\n", nomeCidade2);
        }
        // ========== Armazena o Resultado ====================
          carta1resultado +=(float) pib;
          carta2resultado +=(float) pib2;
        
      break;
      
    // ================== Pontos Turisticos : ====================================================

      case 4 :

        printf("\n\n Comparação de cartas (Atributo:Pontos Turisticos) :  ");

        printf("\n\n    %s (%s) : %d ", nomeCidade, codigoCarta, pontosTuristicos);

        printf("\n    %s (%s) : %d ", nomeCidade2, codigoCarta2, pontosTuristicos2);
        
        if (pontosTuristicos > pontosTuristicos2) 
        {
          printf("\n\n Resultado :   Carta 1 : %s Ganhou!! \n\n", nomeCidade);
        }
        else if (pontosTuristicos == pontosTuristicos2)
        {
          printf("\n\n Resultado :   Empate !! \n\n");
        }
        else 
        {
          printf("\n\n Resultado :   Carta 2 : %s Ganhou!! \n\n", nomeCidade2);
        }
        // ========== Armazena o Resultado ====================
          carta1resultado +=(float) pontosTuristicos;
          carta2resultado +=(float) pontosTuristicos2;
        break;
      
    // ================== Densidade Populacional : ====================================================
       
        case 5 :

          printf("\n\n Comparação de cartas (Atributo:densidade Populacional) :  ");

          printf("\n\n    %s (%s) : %.2f ", nomeCidade, codigoCarta, densidadePopulacional);

          printf("\n    %s (%s) : %.2f ", nomeCidade2, codigoCarta2, densidadePopulacional2);
          
          if (densidadePopulacional < densidadePopulacional2) 
          {
            printf("\n\n Resultado :   Carta 1 : %s Ganhou!! \n\n", nomeCidade);
          }
          else if (densidadePopulacional == densidadePopulacional2)
          {
            printf("\n\n Resultado :   Empate !! \n\n");
          }
          else 
          {
            printf("\n\n Resultado :   Carta 2 : %s Ganhou!! \n\n", nomeCidade2);
          }
        // ========== Armazena o Resultado ====================
          carta1resultado +=(float) inverso;
          carta2resultado +=(float) inverso2;
          
        break;


      default :
      printf("\n\n      Escolha invalida! \n\n ");
      return 0; ///Para o programa

      break;

    }

/////////Manter o resultado aparente ate o usuario confirmar /////////
    
   printf("\n\nDeseja continuar ? [s/n] ");
   scanf(" %c", &continuar);
   
   if (continuar != 's'&& continuar != 'S')  
   {
      printf("\n\nLetra incorreta !!");
      return 0; ///Fecha o programa
   }
       
  /////////////////////Menu interativo 2///////////////////////////////

      printf("\n\n\n\n\n");

      ////Placar :///////
      printf("\n1 - Carta : %.2f Pontos         2 - Carta : %.2f Pontos", carta1resultado, carta2resultado);
      
      printf("\n\nEscolha o segundo atributo para comparar : ");
      printf("\n\n1. População");
      printf("\n2. Área");
      printf("\n3. PIB");
      printf("\n4. Número de Pontos Turisticos");
      printf("\n5. Densidade Populacional");
      printf("\n\nR : ");
      scanf("%d", &escolhaAtributo2);
      printf("\n\n\n\n\n");

      if (escolhaAtributo == escolhaAtributo2)
      {
       printf("\nAtributo Ja foi Escolhido! \n\n");
       return 0; ///Fecha o programa
      }
      else
      switch(escolhaAtributo2)
      {


      // ==================Populacao : ====================================================
      
      case 1:

        printf("\n\n Comparação de cartas (Atributo: População): ");

        printf("\n\n    %s (%s) : %lu ", nomeCidade, codigoCarta, populacao);

        printf("\n    %s (%s) : %lu ", nomeCidade2, codigoCarta2, populacao2);
        
        if (populacao > populacao2) 
        {
          printf("\n\n Resultado :   Carta 1 : %s Ganhou!! \n\n", nomeCidade);
          
        }
        else if(populacao == populacao2)
        {
          printf("\n\n Resultado :   Empate !! \n\n");
         
        }
        else 
        {
          printf("\n\n Resultado :   Carta 2 : %s Ganhou!! \n\n", nomeCidade2);
          
        }
      // ========== Armazena o Resultado ====================
        carta1resultado +=(float) populacao;
        carta2resultado +=(float) populacao2;

     break;
      

    // ================== Area : ====================================================
        
      case 2 :

        printf("\n\n Comparação de cartas (Atributo: Área(Km²)): ");

        printf("\n\n    %s (%s) : %.2f ", nomeCidade, codigoCarta, areaKm);

        printf("\n    %s (%s) : %.2f ", nomeCidade2, codigoCarta2, areaKm2);
        
        if (areaKm > areaKm2)
        {
          printf("\n\n Resultado :   Carta 1 : %s Ganhou!! \n\n", nomeCidade);
          
        }
        else if (areaKm == areaKm2)
        {
          printf("\n\n Resultado :   Empate !! \n\n");
        }
        else 
        {
          printf("\n\n Resultado :   Carta 2 : %s Ganhou!! \n\n", nomeCidade2);
        }
        // ========== Armazena o Resultado ====================
        carta1resultado += areaKm;
        carta2resultado += areaKm2;

        break;

    // ================== Pib : ====================================================
      
      case 3 :

        printf("\n\n Comparação de cartas (Atributo:Pib) : ");

        printf("\n\n    %s (%s) : %.2f ", nomeCidade, codigoCarta, pib);

        printf("\n    %s (%s) : %.2f ", nomeCidade2, codigoCarta2, pib2);
        
        if(pib > pib2) 
        {
          printf("\n\n Resultado :   Carta 1 : %s Ganhou!! \n\n", nomeCidade);
        }
        else if (pib == pib2)
        {
          printf("\n\n Resultado :   Empate !! \n\n");
        }        
        else 
        {
          printf("\n\n Resultado :   Carta 2 : %s Ganhou!! \n\n", nomeCidade2);
        }
        // ========== Armazena o Resultado ====================
          
          carta1resultado += pib;
          carta2resultado += pib2;
        
      break;
      
  // ================== Pontos Turisticos : ====================================================

      case 4 :

        printf("\n\n Comparação de cartas (Atributo:Pontos Turisticos) :  ");

        printf("\n\n    %s (%s) : %d ", nomeCidade, codigoCarta, pontosTuristicos);

        printf("\n    %s (%s) : %d ", nomeCidade2, codigoCarta2, pontosTuristicos2);
        
        if (pontosTuristicos > pontosTuristicos2) 
        {
          printf("\n\n Resultado :   Carta 1 : %s Ganhou!! \n\n", nomeCidade);
        }
        else if (pontosTuristicos == pontosTuristicos2)
        {
          printf("\n\n Resultado :   Empate !! \n\n");
        }
        else 
        {
          printf("\n\n Resultado :   Carta 2 : %s Ganhou!! \n\n", nomeCidade2);
        }
        // ========== Armazena o Resultado ====================
          carta1resultado +=(float) pontosTuristicos;
          carta2resultado +=(float) pontosTuristicos2;
        break;
      
  // ================== Densidade Populacional : ====================================================
       
        case 5 :

          printf("\n\n Comparação de cartas (Atributo:densidade Populacional) :  ");

          printf("\n\n    %s (%s) : %.2f ", nomeCidade, codigoCarta, densidadePopulacional);

          printf("\n    %s (%s) : %.2f ", nomeCidade2, codigoCarta2, densidadePopulacional2);
          
          if (densidadePopulacional < densidadePopulacional2) 
          {
            printf("\n\n Resultado :   Carta 1 : %s Ganhou!! \n\n", nomeCidade);
          }
          else if (densidadePopulacional == densidadePopulacional2)
          {
            printf("\n\n Resultado :   Empate !! \n\n");
          }
          else 
          {
            printf("\n\n Resultado :   Carta 2 : %s Ganhou!! \n\n", nomeCidade2);
          }
        // ========== Armazena o Resultado ====================
          carta1resultado += inverso;
          carta2resultado += inverso2;
          
        break;


      default :
      printf("\n\n      Escolha invalida! \n\n ");
      return 0; ///Para o programa

      break;

    }

    /////////Manter o resultado aparente ate o usuario confirmar /////////
    
      printf("\n\nDeseja continuar ? [s/n] ");
      scanf(" %c", &continuar2);
      
      if (continuar2 != 's'&& continuar2 != 'S')  
      {
          printf("\n\nLetra incorreta !!");
          return 0; ///Fecha o programa
      }


  // ========================================================================
  // MOSTRAR RESULTADO FINAL : 
  // ========================================================================
    printf("\n\n\n\n\n\n\n\n"); //Limpar terminal

    printf("\n\nPlacar Final : 1 - Carta  %s (%s): %.2f         2 - Carta %s (%s): %.2f",nomeCidade, codigoCarta, carta1resultado, nomeCidade2, codigoCarta2, carta2resultado);

    carta1resultado > carta2resultado ? printf("\n\n Resultado :   Carta 1 : %s Ganhou!! \n\n", nomeCidade) : 0 ;
    carta1resultado == carta2resultado ? printf("\n\n Resultado :   Empate !! \n\n") : 0;
    carta1resultado < carta2resultado ? printf("\n\n Resultado :   Carta 2 : %s Ganhou!! \n\n", nomeCidade2) : 0 ;
  
  
  
    return 0;
}

