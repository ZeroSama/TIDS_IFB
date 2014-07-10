/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 26 de Junho de 2014, 10:59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    // 1. Faça um programa que calcule as quatro operações básicas (calculadora simples).
    
    int opcao;
    float num01,num02;
    
    do {
       
     printf("Entre com um numero: ");
     scanf("%f",&num01);
     
     printf("Entre com um numero: ");
     scanf("%f",&num02);
     
     printf("Entre com o numero da operacao matematica:\n");
     printf("1 - Adição;\n");
     printf("2 - Subtração;\n");
     printf("3 - Multiplicação;\n");
     printf("4 - Divisao;\n");
     printf("5 - Sair;\n");
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
      else{
          printf("Operador matematico não encontrado\n");
      }
        
    }while(opcao != 5);
    
    
    return (EXIT_SUCCESS);
}

