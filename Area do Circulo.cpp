/*
Nome: Area do Circulo
Fun��o: Informar a area de um circulo
Autor: Polyana de Souza
Data de cria��o: 26/09/2019
Data de altera��o: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int raio = 0;
	float areac;
	
	printf("Informe o raio: ");
	scanf("%i", &raio);

	areac = (raio * raio) * 3.14;
	
	printf("A �rea do circulo � de: %.2f \n\n", areac);
	system("pause");
}
	
