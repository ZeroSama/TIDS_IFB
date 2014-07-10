/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 28 de Junho de 2014, 16:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */


void calc(){
int opcao,numero;
    
        printf("Escolha \n");
        printf("1 - Fahrenheit para Celsius;\n");
        printf("2 - Celsius para Fahrenheit;\n");
        scanf("%d",&opcao);
        
        if (opcao == 1 || opcao == 2){
        
        printf("Entre com a temperadura: ");
        scanf("%d",&numero);
        
        if(opcao == 1){
            printf("%d = (%d -32) /1,8\n",((numero-32)/1,8),numero);
        }
        else{
            printf("%d = %d * 1,8 + 32\n",(numero*1,8+32),numero); 
        }
        }
        else{
            printf("opcao não encontrado\n");
        }
}

int main(int argc, char** argv) {
    
calc();

    return (EXIT_SUCCESS);
}

