/*
 ============================================================================
 Name        : Clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(int num1, int num2); //declarar

int main() {
	setbuf(stdout, NULL);
	int num1;
	int num2;
	int res;
	printf("Ingrese n?mero: ");
	scanf("%d",&num1);
	printf("Ingrese otro n?mero: ");
	scanf("%d",&num2);
	res = sumar(num1,num2);
	printf("El resultado es: %d", res);
	return EXIT_SUCCESS;
}
int sumar(int numb1, int numb2) {
	int resu;
	resu = numb1 + numb2;
	return resu;
}
