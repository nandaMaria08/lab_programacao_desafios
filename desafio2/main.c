#include <stdio.h>
#include <stdlib.h>

int contar_ocorrencias_ponteiro(char *str, char alvo){
    int contador = 0;

    if(str == NULL){
        return 0;
    }

    while(*str != '\0'){
        if(*str == alvo){
            contador++;
        }
        str++;
    }

    return contador;
}


int main()
{
    char log[] =  "ALERTA: 85C| ALERTA: 92C| ALERTA: 78C";
    char alvo = 'A';

    printf("Log: %s\n", log);
    printf("O charactere %c aparece %d vezes no log", alvo, contar_ocorrencias_ponteiro(log,alvo));
}
