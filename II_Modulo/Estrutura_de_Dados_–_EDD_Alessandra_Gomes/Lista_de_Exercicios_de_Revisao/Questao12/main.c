/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 28 de Junho de 2014, 10:22
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
   char nome[10],sobrenome[10];
   int i;

   printf("Entre com o nome: ");
   scanf("%s",&nome);
  
  printf("Entre com o sobrenome: ");
  scanf("%s",&sobrenome);

  for(i=0;i<=4;i++){
   printf("%d - %s %s\n",i+1,nome,sobrenome);
  }
    return (EXIT_SUCCESS);
}

