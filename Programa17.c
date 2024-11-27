/*17.-*/
#include <stdio.h>
union Numero{
	int entero;
	float flotante;
};

int main(){
	union Numero num;
	num.entero=10;
	printf("Valor como variable: %d\n",num.entero);
	num.flotante=3.14;
	printf("Valor como flotante: %.3f\n",num.flotante);
	
	return 0;
}
