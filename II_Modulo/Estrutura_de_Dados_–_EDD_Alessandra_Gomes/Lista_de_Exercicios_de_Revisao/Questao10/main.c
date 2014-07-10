/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 28 de Junho de 2014, 10:20
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {

 int opcao;
    float num01,num02;
    
    do {
       
     printf("Entre com um numero: ");
     scanf("%f",&num01);
     
     printf("Entre com um numero: ");
     scanf("%f",&num02);
     
     printf("Entre com o numero da operacao matematica:\n");
     printf("1 - Adicao;\n");
     printf("2 - Subtracao;\n");
     printf("3 - Multiplicacao;\n");
     printf("4 - Divisao;\n");
     printf("5 - Modulo\n;\n");
     printf("6 - Sair\n");
     scanf("%d",&opcao);
     
     
      if(opcao == 1){
          printf("%.0f + %.0f = %.0f\n",num01,num02,num01+num02);
       }
      else if(opcao == 2){
          printf("%.0f - %.0f = %.0f\n",num01,num02,num01-num02);
      }
      else if(opcao == 3){
          printf("%.0f * %.0f = %.0f\n",num01,num02,num01*num02);
      }
      else if(opcao ==4){
          printf("%.0f / %.0f = %.2f\n",num01,num02,num01/num02);
      }
      else if(opcao == 5){
          printf("Saindo do programa.\n");
      }
      else if (opcao != 6){
          printf("Operador matematico não encontrado\n");
      }
     else{
     printf("Saindo do sistema");     
     }
        
    }while(opcao != 5);

    return (EXIT_SUCCESS);
}

