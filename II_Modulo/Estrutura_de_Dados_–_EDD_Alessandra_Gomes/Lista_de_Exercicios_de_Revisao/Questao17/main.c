/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 28 de Junho de 2014, 10:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int inicio, final,i;
   
 printf("Entre com o numero inicial: ");
 scanf("%d",&inicio);

 printf("Entre com o numero final: ");
 scanf("%d",&final);

 i = inicio;

 printf("\n");
 printf("|-----------|\n");
 printf("| Crescente |\n");
 printf("|-----------|\n");

  for(i;i <= final ; i++){
   printf("| %d         |\n",i);
  }

printf("|-----------|\n");

printf("\n\n");

 printf("|-------------|\n");
 printf("| Decrescente |\n");
 printf("|-------------|\n");

 for(final;final >=inicio;final--){
printf("| %d |\n",final);
} 

printf("|-------------|\n");

    return (EXIT_SUCCESS);
}

