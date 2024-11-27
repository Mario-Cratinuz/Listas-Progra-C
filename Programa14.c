/*14.-Punteros*/
#include <stdio.h>
int main(){
	int x= 10;
	int *ptr= &x;
	printf("Valor de x: %d\n", x);	
	printf("Direccion de x: %p\n", &x);
	printf("Valor apuntado por ptr: %d\n", *ptr);
	
	return 0;
}
