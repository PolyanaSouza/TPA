/*
Nome: Ordem
Função: Colocar os numeros em ordem crescente
Autor: Polyana de Souza
Data de criação: 09/10/2019
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
		if(n2 > n3){
			printf("A ordem é %i, %i e %i \n", n3, n2, n1);
			system("pause");}
		else{
			printf("A ordem é %i, %i e %i \n", n2, n3, n1);
			system("pause");
		}
	}else if( n2 > n3 ){
		if(( n1 < n3) and (n3 < n2)){
			printf("A ordem é %i, %i e %i \n", n1, n3, n2);
			system("pause");}
		else{
			printf("A ordem é %i, %i e %i \n", n3, n1, n2);
			system("pause");}
	}else if(( n1 < n2) and (n2 < n3)){
		printf("A ordem é %i, %i e %i \n", n1, n2, n3);
		system("pause");
	}else{
		printf("A ordem é %i, %i e %i \n", n2, n1, n3);
		system("pause");
	}
	}
