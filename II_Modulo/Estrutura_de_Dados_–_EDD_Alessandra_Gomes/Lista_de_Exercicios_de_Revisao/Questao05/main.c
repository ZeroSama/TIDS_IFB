/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 26 de Junho de 2014, 11:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    
    int anoNascimento,ano,idade;
    
    printf("Entre com o ano de nascimento: ");
    scanf("%d",&anoNascimento);
    printf("Entre com ano: ");
    scanf("%d",&ano);
    
    idade = ano - anoNascimento;
    
    printf("Idade: %d \n",idade);
    
    if(idade >= 18){
printf("E maior de idade.\n");     
    }
    else{
        printf("E menor de idade;\n");
    }
    
    return (EXIT_SUCCESS);
}

