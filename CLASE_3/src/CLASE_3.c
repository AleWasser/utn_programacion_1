/*
 ============================================================================
 Name        : CLASE_3.c
 Author      : Alejo Wasser
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int sumar(int num1, int num2);
int restar(int num1, int num2);
float dividir(int num1, int num2);
int multiplicar(int num1, int num2);

int main(void) {
	int numero1;
	int numero2;
	int operacion;

	printf("Ingrese un numero: ");
	__fpurge(stdin);
	scanf("%d", &numero1);

	printf("Ingrese la operacion: \n 1)Suma \n 2)Resta \n 3)Division \n 4)Multiplicacion \n");
	__fpurge(stdin);
	scanf("%d", &operacion);

	printf("Ingrese un segundo numero: ");
	__fpurge(stdin);
	scanf("%d", &numero2);

	switch (operacion) {
		case 1:
			printf("El resultado de la operacion es: %d", sumar(numero1,numero2));
			break;
		case 2:
			printf("El resultado de la operacion es: %d", restar(numero1,numero2));
			break;
		case 3:
			printf("El resultado de la operacion es: %f", dividir(numero1,numero2));
			break;
		case 4:
			printf("El resultado de la operacion es: %d", multiplicar(numero1,numero2));
			break;

		default:
			printf("Operacion no valida.");
			break;
	}
	return 0;
}

int sumar(int num1,int num2){
	return num1 + num2;
}
int restar(int num1,int num2){
	return num1 - num2;
}
float dividir(int num1,int num2){
	if(num1 == 0 || num2 == 0){
		return 0.0;
	}
	return (float) num1 / num2;
}
int multiplicar(int num1,int num2){
	return num1 * num2;
}
