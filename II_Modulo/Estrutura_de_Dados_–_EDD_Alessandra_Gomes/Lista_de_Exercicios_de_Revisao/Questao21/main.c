/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 28 de Junho de 2014, 16:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */


int FahrenheitCelsius (int numero01){

 return ((numero01-32)/1,8);
         
}

int CelsiusFahrenheit(int numero01){

return (numero01*1,8+32);

}

int main(int argc, char** argv) {
    
        int opcao,numero;

        printf("Escolha \n");
        printf("1 - Fahrenheit para Celsius;\n");
        printf("2 - Celsius para Fahrenheit;\n");
        scanf("%d",&opcao);
        
        if (opcao == 1 || opcao == 2){
        
        printf("Entre com a temperadura: ");
        scanf("%d",&numero);
        
        if(opcao == 1){
            printf("%d = (%d -32) /1,8\n",FahrenheitCelsius(numero),numero);
        }
        else{
            printf("%d = %d * 1,8 + 32\n",CelsiusFahrenheit(numero),numero); 
        }
        }
        else{
            printf("opcao não encontrado\n");
        }

    return (EXIT_SUCCESS);
}

