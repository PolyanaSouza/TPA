/*
Nome: Maior que 100
Fun��o: Verificar se um numero � maior que 100 e se for somar 150
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
	
	printf("Informe o n�mero: ");
	scanf("%i", &n);
	
	if( n >= 100){
		n = n + 150;
	}
	
	printf("Seu numero �: %i \n\n", n );
	system("pause");
	}
