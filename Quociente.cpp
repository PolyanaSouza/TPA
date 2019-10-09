/*
Nome: Quociente
Função: Apresentar o quociente e o resto de uma divisão
Autor: Polyana de Souza
Data de criação: 27/09/2019
Data de alteracao: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	int n1 = 0;
	int n2 = 0;
	int soma = 0;
	int resto, oi;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &n1);
	printf("Informe o segundo número: ");
	scanf("%i", &n2);
	
	resto = n1 / n2;
	oi = n1 % n2;
	
	printf("O quociente é: %i e o resto é: %i \n\n", resto, oi);
	system("pause");
	}
