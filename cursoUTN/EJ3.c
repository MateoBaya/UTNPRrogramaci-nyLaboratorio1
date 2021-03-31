/*
 ============================================================================
 Name        : cursoUTN.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setbuf(stdout,NULL);
	int numeroIngresado;
	int parificador;
	printf("Escriba un número");
	scanf("%d",&numeroIngresado);
	parificador = numeroIngresado % 2;
	if(parificador == 0){
		printf("Es un número par");
	}else{
		printf("Flaco, qué me tiraste");
	}

	return EXIT_SUCCESS;
}
