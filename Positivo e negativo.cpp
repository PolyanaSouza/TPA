/*
Nome: Positivo ou negativo
Fun��o: Verificar se um numero � positivo ou negativo
Autor: Polyana de Souza
Data de cria��o: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	int n = 0;
	
	printf("Informe um n�mero: ");
	scanf("%i", &n);
	
	if( n >= 0){
		printf("Seu numero � positivo \n\n");
		system("pause");
	} else {
		printf("Seu numero � negativo \n\n");
		system("pause");
	}
	}
