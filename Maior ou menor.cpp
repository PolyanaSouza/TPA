/*
Nome: Maior ou menor
Função: Verificar se dois numeros sao iguais maior ou menor 
Autor: Polyana de Souza
Data de criação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	int n1, n2 = 0;
	
	printf("Informe um número: ");
	scanf("%i", &n1);
	printf("Informe outro número: ");
	scanf("%i", &n2);
	
	if( n1 > n2){
		printf("%i é maior! \n\n", n1);
		system("pause");
	}if (n2 > n1) {
		printf("%i é maior! \n\n", n2);
		system("pause");
	}else {
		printf("%i e %i são iguais! \n\n", n1, n2);
		system("pause");
	}
	}
