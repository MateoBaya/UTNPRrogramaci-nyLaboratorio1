#include <stdio.h>

int sumar(int numero1, int numero2);
int restar(int numero1, int numero2);

int main(){
	setbuf(stdout, NULL);
	int num1;
	int num2;
	int resultado;
	char validar;
	printf("Ingrese un numero: ");
	scanf("%d",&num1);
	while(num1 > 100 || num1 < 10){
		printf("ERROR. Valor fuera de parametros: ");
		scanf("%d",&num1);
	}
	printf("Ingrese un numero: ");
	scanf("%d",&num2);
	while(num2 > 100 || num2 < 10){
		printf("ERROR. Valor fuera de parametros: ");
		scanf("%d",&num2);
	}
	printf("Escriba S para sumar o R para restar: ");
	fflush(stdin);
	scanf("%c",&validar);
	while(validar != 'R' && validar != 'S'){
		printf("ERROR. Valor fuera de parametros: ");
		fflush(stdin);
		scanf("%c",&validar);
	}
	if(validar == 'S'){
		resultado = sumar(num1, num2);
	}else if(validar == 'R'){
		resultado = restar(num1, num2);
	}
	printf("Tu resultado es: %d",resultado);

	return 0;
}

int sumar(int numero1,int numero2){
	int resultado;
	resultado = numero1 + numero2;
return resultado;
}

int restar(int numero1,int numero2){
	int resultado;
	resultado = numero1 - numero2;
return resultado;
}

