/*9.-Arreglos*/
#include <stdio.h>
int main (){
    int numeros [5]= {1,2,3,4,5}; /*Notemos que tiene la posicion [p]= {P0, P1, P2, P3, P4}*/
    for (int i= 0; i < 5; i++){
            printf("%d", numeros[i]); //Se le puso el [i] en numeros para que imprima respecto a la posicion que le toca en el bucle for
    }
    printf("\n");

return 0;
}
