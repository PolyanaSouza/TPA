/*
Nome: Idade
Função: Verificar a categoria da pessoa de acordo com a idade
Autor: Polyana de Souza
Data de criação: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "");
	int i = 0;
	
	printf("  Informe sua idade: ");
	scanf("%i", &i);

	
	if(( i > 5) and (i <11)){
			printf("  ***Categoria Infantil***\n");
			system("pause");
	}else if(( i > 12) and (i <17)){
			printf("  ***Categoria Juvenil***\n");
			system("pause");
	}else if( i > 18){
			printf("  ***Categoria Adulta***\n");
			system("pause");
	}else{
			printf("Você esta fora da idade!\n");
			system("pause");
	}
}
