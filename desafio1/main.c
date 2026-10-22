#include <stdio.h>
#include <stdlib.h>

void calibrar_sensor(float *leitura, float fatorCorrecao){
    if(leitura != NULL){
        *leitura = (*leitura) * fatorCorrecao;
    }
}


int main()
{
    float temperatura = 40.0f;

    calibrar_sensor(&temperatura,1.15);
    printf("Temperatura apos correcao: %.2f",temperatura);



    return 0;
}
