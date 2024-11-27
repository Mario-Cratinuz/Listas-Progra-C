/*16.-Estructuras*/
//Este programa imprime la edad de una persona 
#include <stdio.h>
struct Persona{ /**/
	char nombre[50];
	int edad;
	float altura; 
};

int main(){
	struct Persona persona1;
	strcpy (persona1.nombre, "Aguita de Limon");/* strcpy (s,ct); copia la cadena ct a al final de la cadena s*/
	persona1.edad = 30;
	persona1.altura = 1.75;
	
	printf("El usario es %s\nSu edad es %i\nSu altura es %.2f\n ",persona1.nombre, persona1.edad, persona1.altura);
return 0;
}
