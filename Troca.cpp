/*
Nome: Troca
Fun��o: Troca o A com B
Autor: Polyana de Souza
Data de cria��o: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	int a, b, c = 0;
	
	printf("Informe um n�mero: ");
	scanf("%i", &a);
	printf("Informe outro n�mero: ");
	scanf("%i", &b);
	
	c = b;
	b = a;
	a = c;
	
	printf("A = %i e B = %i \n\n", a, b);
	system("pause");
	}
