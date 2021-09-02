#include <stdio.h>
#include <ctype.h>
#include "scanner.h"

int get_token(char *buffer){
    char cadena;
    int index = 0;
    
    cadena = getchar();
    while(isspace(cadena))
    {
        cadena = getchar();    
    }
    if(cadena == ','){
        return COMA;
    } else if(cadena == EOF){
        return FINAL;
    } else{ 
        while (cadena != ',' && !isspace(cadena) && cadena != EOF){
        buffer[index++] = cadena;
        cadena = getchar();
        buffer[index] = '\0';
    }
        ungetc(cadena, stdin);
        return CADENA;  
    }

}

    


