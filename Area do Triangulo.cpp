/*
Nome: Area do Triangulo
Fun��o: Informar a area de um triangulo
Autor: Polyana de Souza
Data de cria��o: 26/09/2019
Data de altera��o: 29/09/2019
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
	
	printf("A �rea do triangulo � de: %i \n\n", areat);
	system("pause");
	}
