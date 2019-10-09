/*
Nome: Media aluno
Função: Receber 4 notas e informar a media
Autor: Polyana de Souza
Data de criação: 27/09/2019
Data de alteração: 29/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
    float nota1, nota2, nota3, nota4, media;
    
	printf("Digite a primeira nota:");
    scanf ("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf ("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);
        
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A media do aluno foi %.2f\n\n", media);
         
    system("pause");
	}
