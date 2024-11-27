/*12.-Retorno de valores*/
int maximo (int a, int b){
	if (a>b){
		return a;
	} else {
		return b;
	}
}
int main(){
	int num1= 15, num2 = 25 ;
	int mayor = maximo(num1,num2);
	printf("El numero mayor es: %d\n", mayor);
	return 0;
}
