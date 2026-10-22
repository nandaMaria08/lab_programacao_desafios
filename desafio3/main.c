#include <stdio.h>
#include <stdlib.h>


typedef struct Equipamento{
    int id;
    char nome[30];
    float temperatura;
    int status_critico;
}Equipamento;


int diagnosticar_frota(Equipamento frota[], int tamanho){
    int alertas = 0;
    for(int i = 0; i<tamanho; i++){
        if(frota[i].temperatura > 80.0){
            frota[i].status_critico = 1;
            alertas++;
        }
        else{
            frota[i].status_critico = 0;
        }

    }

    return alertas;
}
int main()
{
    Equipamento frota[3] = {{1, "Ferrari", 60.0}, {2, "jeep renegade", 81.00}, {3, "celta", 82.0}};
    int quantidadeAlertas = diagnosticar_frota(frota, 3);
    printf("Total de maquinas em alertas: %d\n",quantidadeAlertas);
    printf("Maquinas em alertas:\n");
    for(int i = 0; i < 3; i++){
        if(frota[i].status_critico == 1){
            printf("%s\n",frota[i].nome);
        }
    }
    return 0;
}
