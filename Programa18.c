/*18.-Archivos*/
//No se que hace
#include <stdio.h>
int main(){
	FILE *archivo;	
	archivo = fopen("datos.txt","w");
	fprintf(archivo,"Hola, mundo!\n");
	fclose(archivo);	
	
	return 0;
}
