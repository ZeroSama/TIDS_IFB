/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 28 de Junho de 2014, 17:27
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */

 float Adicao(int num01,int num02){
  return(num01+num02);
 }

float Substracao(int num01,int num02){
return(num01-num02);
}

float Multiplicacao(int num01,int num02){
return(num01*num02);
}

float Divisao(int num01,int num02){
return(num01/num02);
}

float Modulo(int num01,int num02){
return(fmod(num01,num02));
}

int main(int argc, char** argv) {
    
int opcao;
 float num01,num02;
    
    do {
  
     printf("Entre com o numero da operacao matematica:\n");
     printf("1 - Adição;\n");
     printf("2 - Subtração;\n");
     printf("3 - Multiplicação;\n");
     printf("4 - Divisao;\n");
     printf("5 - Modulo;\n");
     printf("6 - Sair;\n");
     scanf("%d",&opcao);
     
     printf("Entre com um numero: ");
     scanf("%f",&num01);
     
     printf("Entre com um numero: ");
     scanf("%f",&num02);
     
      if(opcao == 1){
          printf("%.0f + %.0f = %.0f\n",num01,num02,Adicao(num01,num02));
       }
      else if(opcao == 2){
          printf("%.0f - %.0f = %.0f\n",num01,num02,Substracao(num01,num02));
      }
      else if(opcao == 3){
          printf("%.0f * %.0f = %.0f\n",num01,num02,Multiplicacao(num01,num02));
      }
      else if(opcao ==4){
          printf("%.0f / %.0f = %.2f \n",num01,num02,Divisao(num01,num02));
      }
      else if(opcao == 5){
      printf("%.0f %% %.0f = %.2f\n",num01,num02,Modulo(num01,num02));
      }
      else if( opcao != 6){
          printf("Operador matematico não encontrado\n");
      }
      else{
      printf("Saindo do sistema.");
      }
        
    }while(opcao != 6);

    return (EXIT_SUCCESS);
}

