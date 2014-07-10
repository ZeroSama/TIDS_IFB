/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 28 de Junho de 2014, 10:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
   int inicio,final;

  printf("Entre com o numero inicial: ");
  scanf("%d",&inicio);

  printf("Entre com o numero final: ");
  scanf("%d",&final);

 for(inicio;inicio>=final;inicio--){
  printf("%d\n",inicio);
  }

    return (EXIT_SUCCESS);
}

