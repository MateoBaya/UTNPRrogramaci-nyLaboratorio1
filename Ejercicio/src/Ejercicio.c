/*
 ============================================================================
 Name        : Ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int valor;
	int acumValor = 0;
	int contador = 0;
	int promedio;
	printf("Escriba 5 n�meros: ");
	do{
	scanf("%d",&valor);
	acumValor = acumValor + valor;
	contador++;
	}while(contador < 5);
	promedio = acumValor / 5;
	printf("Tu promedio de n�meros es: %d y tu suma final es: %d",promedio,acumValor);

	return EXIT_SUCCESS;
}
