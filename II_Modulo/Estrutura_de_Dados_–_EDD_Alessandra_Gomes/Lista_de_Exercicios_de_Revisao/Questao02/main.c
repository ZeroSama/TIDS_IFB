/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 26 de Junho de 2014, 11:29
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int main(int argc, char** argv) {

     // 2. Acrescente no programa da questão 1 o cálculo do módulo.
    
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
     printf("5 - Modulo;\n");
     printf("6 - Sair;\n");
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
        printf("%f\n",modf(num01,num02)); 
      }
      else if(opcao == 6){
          printf("Saindo do programa.\n");
      }
      else{
          printf("Operador matematico não encontrado\n");
      }
        
    }while(opcao != 6);
    
    return (EXIT_SUCCESS);
}

