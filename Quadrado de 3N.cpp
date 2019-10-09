/*
Nome: Quadrado de 3N
Função: Apresentar o quadrado da soma de 3 numeros
Autor: Polyana de Souza
Data de criação: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int soma = 0;
	int quadrado = 0;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &n1);
	printf("Informe o segundo número: ");
	scanf("%i", &n2);
	printf("Informe o terceiro número: ");
	scanf("%i", &n3);
	
	soma = n1 + n2 + n3;
	quadrado = soma * soma;
	
	printf("O quadrado é: %i \n\n", quadrado);
	system("pause");
	}
