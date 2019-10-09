/*
Nome: Positivo ou negativo
Função: Verificar se um numero é positivo ou negativo
Autor: Polyana de Souza
Data de criação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	int n = 0;
	
	printf("Informe um número: ");
	scanf("%i", &n);
	
	if( n >= 0){
		printf("Seu numero é positivo \n\n");
		system("pause");
	} else {
		printf("Seu numero é negativo \n\n");
		system("pause");
	}
	}
