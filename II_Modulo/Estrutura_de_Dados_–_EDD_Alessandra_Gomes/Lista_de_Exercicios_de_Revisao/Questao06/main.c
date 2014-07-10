/* 
 * File:   main.c
 * Author: ZeroSama
 *
 * Created on 27 de Junho de 2014, 10:10
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {

    char login[10],senha[10];
    int numero;
    
    do{
    
        printf("Entre com o login: ");
        scanf("%s",&login);
        
      printf("Entre com a senha: ");
       scanf("%s",&senha);
        
        if(strcmp(login,"admin") == 0 && strcmp(senha,"123") == 0){
            numero = 1;
            printf("Entrado no painel de controle\n");
        }
        else{
            numero = 0;
            printf("Login ou senha incorreta.\n");
        }
                
    }while(numero == 0);
    
    
    return (EXIT_SUCCESS);
}

