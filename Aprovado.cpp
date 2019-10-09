/*
Nome: Aprovado
Função: Verificar se o aluno foi aprovado ou reprovado
Autor: Polyana de Souza
Data de criação: 09/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	int nota;
	char nome[100];
	
	printf("  Informe seu nome: ");
	scanf("%s", &nome);
	printf("  Informe sua nota: ");
	scanf("%i", &nota);

	if(nota > 7){
		printf("%s ,Você foi aprovado!\n", nome);
		system("pause");
	}else{
		printf("%s ,Você foi reprovado!\n", nome);
		system("pause");
	}
}
