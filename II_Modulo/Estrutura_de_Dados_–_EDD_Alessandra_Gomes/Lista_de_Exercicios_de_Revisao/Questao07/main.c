/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 27 de Junho de 2014, 10:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int lado01,lado02,lado03,lado04;
    
    
    printf("Entre com o primeiro lado: ");
    scanf("%d",&lado01);
    
    printf("Entre com o segundo lado: ");
    scanf("%d",&lado02);
    
    printf("Entre com o terceiro lado: ");
    scanf("%d",&lado03);
    
    printf("Entre com o quarto lado: ");
    scanf("%d",&lado04);
    
    if(lado01 == lado02 && lado03 ==  lado04 && lado01 == lado03 & lado02 == lado04 && lado01 == lado04 && lado02 == lado03 ){
        printf("Figura geometrica de quadrado\n");
    }
    else{
    
    }
            
    return (EXIT_SUCCESS);
}

