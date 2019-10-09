/*
Nome: Mm3
Função: Verificar se tres numeros sao iguais maior ou menor 
Autor: Polyana de Souza
Data de criação: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	int n1, n2, n3 = 0;
	
	printf("Informe um número: ");
	scanf("%i", &n1);
	printf("Informe um número: ");
	scanf("%i", &n2);
	printf("Informe um número: ");
	scanf("%i", &n3);
	
	if(( n1 > n2) and (n1 > n3)){
		printf("%i é maior! \n\n", n1);
		system("pause");
	}else if (( n2 > n1) and (n2 > n3)) {
		printf("%i é maior! \n\n", n2);
		system("pause");
	}else if (( n3 > n1) and (n3 > n2)) {
		printf("%i é maior! \n\n", n3);
		system("pause");
	}else if ((n1 = n2) and (n1 = n3)) {
		printf("%i e %i e %i são iguais! \n\n", n1, n2, n3);
		system("pause");
	}
	}
