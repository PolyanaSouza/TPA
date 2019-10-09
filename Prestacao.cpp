/*
Nome: Presta��o
Fun��o: Calcular o valor de um atraso de conta
Autor: Polyana de Souza
Data de cria��o: 27/09/2019
Data de altera��o: 28/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL, "");
	int tempo;
	float pres, pjuros, taxa, juros;

	printf("Informe o valor da presta��o: ");
	scanf("%f", &pres);
	printf("Informe o tempo em que a presta��o esta atrasada: ");
	scanf("%i", &tempo);
	printf("Informe a taxa de juros mensal: ");
	scanf("%f", &pjuros);

	taxa = (pres*pjuros)/100;
	juros = pres+(pres*(taxa/100)*tempo);

  	printf("A prestacao � de: %.2f \n\n", juros);

	system("pause");
}
