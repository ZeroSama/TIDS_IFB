/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 28 de Junho de 2014, 10:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int idade;

     printf("Entre com uma idade");
     scanf("%d",&idade);

     if(idade >= 0 && idade <= 10){
     printf("Crinca\n");
     }
     else if(idade >=11 && idade <=17){
     printf("Adolescente\n");
     }
     else{
     printf("Adulto\n");
     } 

    return (EXIT_SUCCESS);
}

