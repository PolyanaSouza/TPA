/*
Nome: Valor do terreno
Fun��o: Calcular o valor de venda de um terreno
Autor: Polyana de Souza
Data de cria��o: 27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int valvend = 0;
	int alt = 0;
	int larg = 0;
	int area = 0;
	float preco;
	
	printf("Informe a altura: ");
	scanf("%i", &alt);
	printf("Informe a largura: ");
	scanf("%i", &larg);
	printf("Informe o valor do metro: ");
	scanf("%i", &valvend);
	
	area = alt * larg;
	preco = area * valvend;
	
	printf("O valor do terreno �: %.2f \n\n\n", preco);
	system("pause");
}
