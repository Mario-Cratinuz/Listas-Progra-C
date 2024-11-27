/*Condiciones simples*/
#include <stdio.h>
int main(){
    int edad;

    printf("Ingrese su edad:");
    scanf("%d", &edad);

    if (edad >= 18)
        printf("Eres mayor de edad, puedes ir a la front.\n");

return 0;
}
