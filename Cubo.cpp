/*
Nome: Cubo entre 5 e 20
Fun��o: Verificar se um numero esta entre 5 e 20 e se ss indicar su cubo
Autor: Polyana de Souza
Data de cria��o: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	int n, cub = 0;
	
	printf("Informe um n�mero: ");
	scanf("%i", &n);
	
	if (( n >= 5) and ( n <= 20)){
		cub = n * n * n;
		printf("O cubo de %i � %i \n\n", n, cub );
		system("pause");
	} else {
		printf("Seu numero n�o esta no intervalo \n\n");
		system("pause");
	}
	}
