#include <stdio.h>
#include <stdlib.h>

int main() {
	setbuf(stdout, NULL);
	int ingresoElegido;
	int ingresoVentas;
	int flagSalida = 1;
	int flagLogueado = 0;
	int flagComprado = 0;
	int contadorCompras = 0;
	int contadorVentas = 0;
	do{
	printf("1- Loguearse, 2- Comprar,3- Ver mis compras, 4- Vender, 5- Salir: ");
	fflush(stdin);
	scanf("%d",&ingresoElegido);
	switch(ingresoElegido){
		case 1:
			if(flagLogueado){
				printf("Ya estaba logueado\n");
			}else{
			printf("Esta logueandose\n");
			}
			flagLogueado = 1;
			break;
		case 2:
			if(flagLogueado){
			printf("Esta en compras\n");
			contadorCompras++;
			flagComprado = 1;
			}else{
				printf("ERROR. Nunca se logueo\n");
			}
			break;
		case 3:
			if(flagLogueado && flagComprado){
			printf("Esta en Ver sus compras\n");
			}else{
				printf("ERROR. Nunca se logueo o nunca compro\n");
			}
			break;
		case 4:
			if(flagLogueado){
					printf("Esta en vender\n");
				do{
					printf("1- Vender 2- Hacer factura 3- Volver atrás: ");
					scanf("%d",&ingresoVentas);
					switch(ingresoVentas){
					case 1:
						if(contadorCompras != contadorVentas){
						printf("Esta vendiendo\n");
						contadorVentas++;
						}else{
							printf("ERROR. No puede vender sin comprar\n");
						}
						break;
					case 2:
						printf("Esta haciendo factura\n");
						break;
					case 3:
						printf("Saliendo de Ventas\n");
						break;
 					}
				}while(ingresoVentas != 3);

			}else{
				printf("ERROR. Nunca se logueo\n");
			}
			break;
		case 5:
			if(flagLogueado){
			printf("Saliendo\n");
			flagSalida = 0;
			}else{
				printf("ERROR. Nunca se logueo\n");
			}
			break;
	}

	}while(flagSalida);
	return 0;
}
