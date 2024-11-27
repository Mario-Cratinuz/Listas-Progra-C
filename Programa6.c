/*Condiciones compuestas*/

#include <stdio.h>
int main(){
    int numero;

    printf("Ingrese un numero:");
    scanf("%d", &numero);

    if (numero > 0){
     printf("El numero es positivo :D ");
    } else if(numero < 0){
    printf("El numero es negativo :c ");
    } else {
    	printf("El numero es cero\n");
	}

return 0;
}
