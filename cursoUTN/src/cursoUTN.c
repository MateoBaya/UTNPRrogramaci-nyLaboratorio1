/*
 ===========================================================================
 Name        : cursoUTN.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ===========================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout,NULL);
	int numIngresado;
	int parificador;
	int cantPares=0;
	int cantImpares=0;
	int min;
	int parMax;
	int sumaPos;
	int flagSuma=1;
	int productoNeg;
	int flagNeg=1;
	int flagParMax=1;
	int flagmin=1;

	printf("Escriba 10 numeros: ");
	for(int i=0;i<10;i++){
		fflush(stdin);
		scanf("%d",&numIngresado);
		while(numIngresado == 0){
			printf("ERROR, es 0, reintente: ");
			scanf("%d",&numIngresado);
		}
		parificador = numIngresado%2;
		if(parificador){
			cantImpares++;
		}else if(parificador==0){
			cantPares++;
			//d
			if(flagParMax || parMax < numIngresado){
				parMax = numIngresado;
				flagParMax=0;
			}
		}
		if(flagmin || min > numIngresado){
			min = numIngresado;
			flagmin = 0;
		}
		if(numIngresado > 0){
			if(flagSuma){
				sumaPos = numIngresado;
				flagSuma=0;
			}else{
				sumaPos += numIngresado;
			}
		}else if(numIngresado<0){
			if(flagNeg){
				productoNeg = numIngresado;
				flagNeg=0;
			}else{
				productoNeg = productoNeg * numIngresado;
			}
		}


	}
	printf("Tiene %d pares y tiene %d impares",cantPares,cantImpares);
	printf("\nSu menor número ingresado es %d",min);
	if(flagParMax){
	printf("\nNo tenes pares, por ende no hay un número mayor par");
	}else{
	printf("\nTu mayor número par es: %d",parMax);
	}
	if(flagSuma){
		printf("\nNo tenés números mayores a 0, no hay suma");
	}else{
	printf("\nTu suma de números mayores a 0 es: %d",sumaPos);
	}
	if(flagNeg){
		printf("\nNo hay numeros menores a 0, no hay producto");
	}else{
	printf("\nTu producto de números negativos es %d",productoNeg);
	}




	return EXIT_SUCCESS;
}
