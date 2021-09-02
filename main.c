#include <stdio.h>
#include <ctype.h>
#include "scanner.h"



int main(void)
{
    char buffer[64];
    char token;
    token = get_token(buffer);
    while(token != FINAL){
        if (token == COMA){
            printf("Separador: %s\n", ",");
        }else if (token == CADENA){
            printf("Cadena: %s\n", buffer);
        }
        token = get_token(buffer);
    }
        printf("Fin de texto: \n");

}
