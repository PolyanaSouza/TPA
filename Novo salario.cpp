/*
Nome: Novo salario
Fun��o: Calcular o valor do novo salario do funcionario
Autor: Polyana de Souza
Data de cria��o: 27/09/2019
Data de altera��o: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float salario, aumento, novosal;

	printf("Informe o seu salario atual: ");
	scanf("%f", &salario);
	printf("Informe a porcentagem de aumento: ");
	scanf("%f", &aumento);
	
	novosal = ((aumento / 100) * salario) + salario;
	
	printf("O seu novo salario �: %.2f \n\n\n", novosal);
	system("pause");
}
