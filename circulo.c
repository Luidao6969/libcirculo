#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"

#define PI 3.1416

Circulo* circ_cria(float x, float y, float r){
// Aloca memória para a struct
    Circulo* ptr = (Circulo*)malloc(sizeof(Circulo));
    // Verifica se a alocação de memória foi bem-sucedida
    if (ptr == NULL) {
        printf("Erro: não foi possível alocar memória\n");
        exit(1); // Saída do programa com código de erro
    }
ptr -> x = x;
ptr -> y = y;
ptr -> r = r;
return ptr;
}

void circ_libera(Circulo *c){

// Libera a memória alocada para a struct
    free(c);
}

float circ_area(Circulo *c){

// Calcula area do circulo usando raio e retorna area
float area;
area = PI*(pow(c -> r,2));
return area;
}

int circ_concentricos(Circulo *c1, Circulo *c2){

//Comparara centro de dois circulos
if (c1 -> x == c2 -> x && c1 -> y == c2 -> y){
    return printf("Os circulos tem o mesmo centro");
}
else{
return printf("Os circulos nao tem o mesmo centro");
}
}

float circ_raio(Circulo *c){

return printf("O raio desse circulo = a %f", c -> r);
}
