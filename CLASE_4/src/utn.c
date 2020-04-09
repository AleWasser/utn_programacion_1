/*
 * utn.c
 *
 *  Created on: Apr 7, 2020
 *      Author: ale
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int bufferInt;
	int retorno = -1;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do{
			printf("%s",mensaje);
			__fpurge(stdin);
			scanf("%d", &bufferInt);
			if(bufferInt < minimo || bufferInt > maximo){
				reintentos--;
				printf("%s",mensajeError);
				printf("Intentos restantes: %d \n", reintentos);
			}else{
				*pResultado = bufferInt;
				reintentos = 0;
				retorno = 0;
			}
		}while(reintentos > 0);
	}
	return retorno;
}

int utn_getNumeroFlotante(float* pResultado, char* mensaje,char* mensajeError, float minimo,float maximo,int reintentos)
{
	float bufferFloat;
	int retorno = -1;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do{
			printf("%s",mensaje);
			__fpurge(stdin);
			scanf("%f", &bufferFloat);
			if(bufferFloat < minimo || bufferFloat > maximo){
				reintentos--;
				printf("%s",mensajeError);
				printf("Intentos restantes: %d \n", reintentos);
			}else{
				*pResultado = bufferFloat;
				reintentos = 0;
				retorno = 0;
			}
		}while(reintentos > 0);
	}
	return retorno;
}

int utn_getCaracter(char* pResultado, char* mensaje,char* mensajeError, char minimo,char maximo,int reintentos)
{
	char bufferChar;
	int retorno = -1;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do{
			printf("%s",mensaje);
			__fpurge(stdin);
			scanf("%c", &bufferChar);
			if(bufferChar < minimo || bufferChar > maximo){
				reintentos--;
				printf("%s",mensajeError);
				printf("Intentos restantes: %d \n", reintentos);
			}else{
				*pResultado = bufferChar;
				reintentos = 0;
				retorno = 0;
			}
		}while(reintentos > 0);
	}
	return retorno;
}
