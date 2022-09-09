/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 5-2:
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
Cantidad de positivos y negativos.
Sumatoria de los pares.
El mayor de los impares.
Listado de los números ingresados.
Listado de los números pares.
Listado de los números de las posiciones impares.
 */

#include <stdio.h>
#include <stdlib.h>
#include "recorrerArray.h"


#define len 10
int main(void) {
	setbuf(stdout , NULL);

	int i;
	int numeros[len];
	int cantidadPositivos = 0;
	int cantidadNegativos = 0;
	int sumarPares = 0;
	int imparMaximo;
	int flag;



	flag = 0;


	for(i=0; i < len ; i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numeros[i]);
		fflush(stdin);
		while(numeros < -100 || numeros > 100){
			printf("ERROR, Ingrese un numero: ");
			scanf("%d", &numeros[i]);
			fflush(stdin);
		}


		recorrerArray(numeros[i], len);

	if(numeros > 0){
		cantidadPositivos++;
	}else {
		cantidadNegativos++;
	}

	if(numeros % 2 == 0){
		sumarPares+=numeros;
	}else if(imparMaximo < numeros || flag == 0){
		imparMaximo = numeros;
		flag =1;
	}

	}
	printf("La cantidad de positivos es: %d \n", cantidadPositivos);
	printf("La cantidad de negativos es: %d \n",cantidadNegativos);
	printf("La suma de los pares es: %d \n", sumarPares);
	printf("El impar maximo es: %d \n" , imparMaximo);

	return EXIT_SUCCESS;
}







