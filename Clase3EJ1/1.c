#include <stdio.h>

float descuento(int numero);

int main(){
	setbuf(stdout, NULL);
	float numIngresado;
	float resultado;
	printf("Escriba un numero:");
	scanf("%f",&numIngresado);
	if(numIngresado>100 || numIngresado<10){
		printf("ERROR. Esta fuera de parametros");
		scanf("%f",&numIngresado);
	}
	resultado = descuento(numIngresado);
	printf("%f", resultado);

return 0;
}

float descuento(int numero){
	float descuentos;
	descuentos = numero + numero * 0.05;
return descuentos;
}
