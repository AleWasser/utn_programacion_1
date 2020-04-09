/*
 ============================================================================
 Name        : CLASE_4.c
 Author      : Alejo Wasser
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "dividir.h"
#include "utn.h"

int main(void)
{
	int edad;
	int peso;
	int respuesta;

	respuesta = utn_getNumero(&edad,"Edad?\n","Error la edad debe ser desde 0 a 199\n",0,199,2);
	if(respuesta == 0)
	{
		printf("La edad es: %d \n",edad);
	}
	else
	{
		printf("ERROR \n");
	}

	respuesta = utn_getNumero(&peso,"Peso?\n","Error peso debe ser desde 0 a 500\n",0,500,3);
	if(respuesta == 0)
	{
		printf("El peso es: %d \n",peso);
	}
	else
	{
		printf("ERROR \n");
	}


	return EXIT_SUCCESS;
}
