/*
Nome: Par ou Impar
Função: Verificar se um numero é par ou impar
Autor: Polyana de Souza
Data de criação: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	int i, c= 0;
	
	printf("  Informe seu numero: ");
	scanf("%i", &i);
	
	if ( i % 2 == 0 ){
		printf("%i é par!\n", i);
		system("pause");
	}else {
		printf("%i é impar!\n", i);
		system("pause");
	}
}
