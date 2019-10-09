/*
Nome: Maior que 100
Função: Verificar se um numero é maior que 100 e se for somar 150
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
	
	printf("Informe o número: ");
	scanf("%i", &n);
	
	if( n >= 100){
		n = n + 150;
	}
	
	printf("Seu numero é: %i \n\n", n );
	system("pause");
	}
