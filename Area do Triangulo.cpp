/*
Nome: Area do Triangulo
Função: Informar a area de um triangulo
Autor: Polyana de Souza
Data de criação: 26/09/2019
Data de alteração: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int bas = 0;
	int alt = 0;
	int areat = 0;
	
	printf("Informe a base: ");
	scanf("%i", &bas);
	printf("Informe a altura: ");
	scanf("%i", &alt);
	
	areat = (bas * alt)/2;
	
	printf("A área do triangulo é de: %i \n\n", areat);
	system("pause");
	}
