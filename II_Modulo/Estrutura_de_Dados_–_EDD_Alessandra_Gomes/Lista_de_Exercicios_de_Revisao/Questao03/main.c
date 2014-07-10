/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 26 de Junho de 2014, 11:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    //3. Faça um programa que solicite o ano de nascimento do usuário e calcule a idade.
    
    int anoNascimento,ano;
    
    printf("Entre com o ano de nascimento: ");
    scanf("%d",&anoNascimento);
    printf("Entre com o ano: ");
    scanf("%d",&ano);
    printf("A idade do usuario e %d\n",ano-anoNascimento);
    
    return (EXIT_SUCCESS);
}

