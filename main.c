#include <stdio.h>
#include "circulo.h"

int main(void) {
Circulo *C1 = circ_cria(10, 10, 8); 
Circulo *C2 = circ_cria(10, 10, 16);
float Area_Circ = circ_area(C1);
printf("A area desse circulo = %f ", Area_Circ);
printf("\n");
circ_concentricos(C1, C2);
printf("\n");
circ_raio(C1);
printf("\n");
circ_libera(C1);

getchar();
}
