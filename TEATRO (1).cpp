/*
Nome: Teatro Garden's / Parte 3: reservando uma poltrona
Autor: Pedro Honorato e Polyana Benevides
Data de criação: 21/11/2019
Data de alteração: 23/11/2019
*/

#include <stdio.h>
//#include <windows.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	char nome[60];
	int codigo = -1;
	float vain, vame, precomp, precompin, tcompres;
	int colu2,lin2,l,c,linhares, colunares ; 
	int conferindoCadeiras=600, reserva, inteira = 0, meia, lugarres, cv, cancela,Inteira, ttres, comint;
	int ccl = 0, ar = 0,tc = 0;
	float total;
	float prereser;
	char cadeira[25][20];
	char rs;
		

	printf("Olá! Seja muito bem vindo!\n\n");
	printf("Por favor, indique seu nome: ");
	scanf("%s", nome);
	printf("\n\n %s por favor indique qual opção você quer!\n\n\n", nome);
	
	
	
	while(codigo != 0){
		printf("+-----------+--------------------------------------------+\n");
		printf("|   Codigo  |                 Operação                   |\n");
		printf("+-----------+--------------------------------------------+\n");
		printf("|     1     | Preço dos ingresso e tamanho da sala       |\n");
		printf("+-----------+--------------------------------------------+\n");
		printf("|     2     | Abrir um espetáculo                        |\n");
		printf("+-----------+--------------------------------------------+\n");
		printf("|     3     | Reservar ou cancelar a reserva de um lugar |\n");
		printf("+-----------+--------------------------------------------+\n");
		printf("|     4     | Comprar um lugar(Inteiro)                  |\n");
		printf("+-----------+--------------------------------------------+\n");
		printf("|     5     | Comprar um lugar(Meia)                     |\n");
		printf("+-----------+--------------------------------------------+\n");
		printf("|     6     | Verificar mapa do Teatro                   |\n");
		printf("+-----------+--------------------------------------------+\n");
		printf("|     7     | Encerrar o espetaculo                      |\n");
		printf("+-----------+--------------------------------------------+\n");
		printf("|     8     | Verificar parciais                         |\n");
		printf("+-----------+--------------------------------------------+\n");
		printf("|     0     | Cancelar tudo                              |\n");
		printf("+-----------+--------------------------------------------+\n\n\n");
		printf("%s por favor, escolha o codigo: ", nome);
		scanf("%i", &codigo);
		printf("\n");

		if(codigo == 1){
			
			printf("Informe o valor do ingresso:");
			scanf("%f", &vain);
			vame = vain / 2;
			printf("\n");
			while(conferindoCadeiras > 500){
				printf("Informe dimensões que dê até 500 lugares.\n\n");
				printf("Informe a quantidade de colunas:");
				scanf("%i", &colu2);
				printf("Informe a quantidade de linhas:");
				scanf("%i", &lin2);
				conferindoCadeiras = colu2 * lin2;
				if(conferindoCadeiras > 500){
					printf("\n\nInforme um tamanho que dê até 500 lugares.\n\n");
				}
			}
			
			printf("+----------------------------+\n");
			printf("|      Preço do ingresso     |\n");
			printf("+----------------------------+\n");
			printf("|    Inteira   |    Meia     |\n");
			printf("+--------------+-------------+\n");
			printf("|    R$%.2f   |   R$%.2f   |\n", vain,vame );
			printf("+----------------------------+\n\n");
			
			for(l = 0; l < lin2; l++){
				for(c = 0; c < colu2; c++){
					cadeira[l][c] = ' ';
					printf("|| %02i%c%02i ",l +1, cadeira[l][c], c + 1);
				}
			    printf("|\n");
			}printf("\n\n======Poltronas Prontas======\n\n");
				
		}else if(codigo == 2){ 	
			for(l = 0; l < lin2; l++){
				for(c = 0; c < colu2; c++){
					if(cadeira[linhares-1][colunares-1] != ' '){
	    				cadeira[l][c] = ' ';
					}
				printf("|| %02i%c%02i ",l +1, cadeira[l][c], c + 1);	   
				}printf("|\n");
			}
			
		}else if(codigo == 3){
			
				printf("Para reservar um lugar, digite '1'. Caso queira cancelar uma reserva, digite '2': ");
				scanf("%i", &reserva);
				
				if(reserva == 1){
					printf("\nAVISO: Para reservar um local é necessario pagar 60%% do valor do ingresso,e apenas inteiras podem ser reservadas, sendo assim: \n\n");
					
					printf("Deseja constinuar (S/N): ");
					scanf("%s", &rs);
					printf("\n");
					
					if((rs == 's') or (rs == 'S')){
						rs = 'a';
						printf("%s você vai querer reservar quantas Inteiras?", nome);
						scanf("%i", &inteira);
						ar = ar + inteira;
						prereser = (inteira * vain)*0.6;
						total= total + prereser;
						printf("+-------------------------+\n");
						printf("|    Valor para reserva   |\n");
						printf("+-------------------------+\n");
						printf("|        R$ %.2f         |\n", prereser);
						printf("+-------------------------+\n");
						printf("\n");
					
						for(lugarres= 0; lugarres < inteira; lugarres++){
							printf ("Informe a linha: ");
							scanf ("%i", &linhares);
							printf ("Informe a coluna: ");
							scanf ("%i", &colunares);
							while(colunares>colu2 or linhares>lin2 or cadeira[linhares-1][colunares-1]!=' '){
								printf("Ocupado ou inxistente\n\n");
								printf ("Informe a linha: ");
								scanf ("%i", &linhares);
								printf ("Informe a coluna: ");
								scanf ("%i", &colunares);
							}
							cadeira[linhares-1][colunares-1]='R';
							for(l = 0; l < lin2; l++){
								for(c = 0; c < colu2; c++){
									printf("|| %02i%c%02i ",l +1, cadeira[l][c], c + 1);
								}
							    printf("|\n");
							}printf("\n\n======Reserva Efetuada======\n\n");
						}
					}
				}else if(reserva == 2){
				printf("%s você vai querer cancelar quantas reservas?", nome);
				scanf("%i", &cancela);
				prereser = ((inteira-1) * vain)*0.6; 
				for(lugarres = 0; lugarres < cancela; lugarres++){
					printf ("Informe a linha que está sua poltrona: ");
					scanf ("%i", &linhares);
					printf ("Informe a coluna que está sua poltrona: ");
					scanf ("%i", &colunares);
				    if(cadeira[linhares-1][colunares-1] = 'R'){
						cadeira[linhares-1][colunares-1] = ' ';
						for(l = 0; l < lin2; l++){
							for(c = 0; c < colu2; c++){
								printf("|| %02i%c%02i ",l +1, cadeira[l][c], c + 1);
							}
						    printf("|\n");
						}printf("\n\n======Reserva Cancelada======\n\n");
					}
				}
			}
		}else if(codigo == 4){
			printf("%s, você ja tem reservas? (S/N)", nome);
			scanf("%s", &rs);
			printf("\n");
			if((rs == 's') or (rs == 'S')){
				rs = 'a';
				printf("Você ainda precisa pagar 40%%. Quantas reservas você tem?  ");
				scanf("%i", &ttres);
				tcompres = (ttres * vain)*0.4;
				inteira = inteira - ttres;
				tc= tc + ttres;
				total= total + ttres;
				printf("+-------------------------+\n");
				printf("|    Valor para compra    |\n");
				printf("+-------------------------+\n");
				printf("|        R$ %.2f         |\n", tcompres);
				printf("+-------------------------+\n");
				for(lugarres = 0; lugarres < ttres; lugarres++){
					printf ("Informe a linha: ");
					scanf ("%i", &linhares);
					printf ("Informe a coluna: ");
					scanf ("%i", &colunares);
				    cadeira[linhares-1][colunares-1] = 'P';
					
					for(l = 0; l < lin2; l++){
						for(c = 0; c < colu2; c++){
							printf("|| %02i%c%02i ",l +1, cadeira[l][c], c + 1);
						}
					    printf("|\n");
					}printf("\n\n======Compra Efetuada======\n\n");
				}
			}else{
				printf("Para compra um ingresso inteiro é necessário pagar:\n");
				printf("+-------------------------+\n");
				printf("|    Valor para compra    |\n");
				printf("+-------------------------+\n");
				printf("|        R$ %.2f         |\n", vain);
				printf("+-------------------------+\n");
				
				printf("Deseja constinuar (S/N): ");
				scanf("%s", &rs);
				printf("\n");
				
				if((rs == 's') or (rs == 'S')){
					rs = 'a';
					printf("%s você vai querer comprar quantas inteiras?", nome);
					scanf("%i", &comint);
					tc= tc + comint;
					ar = ar + comint;
					precompin = vain*comint;
					total= total + precompin;
					printf("%.2f", precompin);
					printf("+-------------------------+\n");
					printf("|    Valor para compra    |\n");
					printf("+-------------------------+\n");
					printf("|        R$ %.2f         |\n", precompin);
					printf("+-------------------------+\n");
					for(lugarres = 0; lugarres < comint; lugarres++){
						printf ("Informe a linha: ");
						scanf ("%i", &linhares);
						printf ("Informe a coluna: ");
						scanf ("%i", &colunares);
						while(colunares>colu2 or linhares>lin2 or cadeira[linhares-1][colunares-1]!=' '){
							printf("Ocupado ou inxistente\n\n");
							printf ("Informe a linha: ");
							scanf ("%i", &linhares);
							printf ("Informe a coluna: ");
							scanf ("%i", &colunares);
						}
					    cadeira[linhares-1][colunares-1] = 'P';
						
						for(l = 0; l < lin2; l++){
							for(c = 0; c < colu2; c++){
								printf("|| %02i%c%02i ",l +1, cadeira[l][c], c + 1);
							}
						    printf("|\n");
						}printf("\n\n======Compra Efetuada======\n\n");
					}
				}else{
				}
			}
			
		}else if(codigo == 5){
			printf("Para comprar um ingresso meio é necessário pagar:\n");
			printf("+-------------------------+\n");
			printf("|    Valor para compra    |\n");
			printf("+-------------------------+\n");
			printf("|        R$ %.2f         |\n", vame);
			printf("+-------------------------+\n");
			
			printf("Deseja constinuar (S/N): ");
			scanf("%s", &rs);
			printf("\n");
			
			if((rs == 's') or (rs == 'S')){
				rs = 'a';
				printf("%s você vai querer comprar quantas meias?", nome);
				scanf("%i", &meia);
				ar = ar + meia;
				tc= tc + meia;
				precomp = (meia * vame);
				total= total + precomp;
				printf("Para comprar um ingresso meia é necessário pagar:\n");
				printf("+-------------------------+\n");
				printf("|    Valor para compra    |\n");
				printf("+-------------------------+\n");
				printf("|        R$ %.2f         |\n", precomp);
				printf("+-------------------------+\n");
				for(lugarres = 0; lugarres < meia; lugarres++){
					printf ("Informe a linha: ");
					scanf ("%i", &linhares);
					printf ("Informe a coluna: ");
					scanf ("%i", &colunares);
					while(colunares>colu2 or linhares>lin2 or cadeira[linhares-1][colunares-1]!=' '){
						printf("Ocupado ou inxistente\n\n");
						printf ("Informe a linha: ");
						scanf ("%i", &linhares);
						printf ("Informe a coluna: ");
						scanf ("%i", &colunares);
					}
				    cadeira[linhares-1][colunares-1] = 'P';
					
					for(l = 0; l < lin2; l++){
						for(c = 0; c < colu2; c++){
							printf("|| %02i%c%02i ",l +1, cadeira[l][c], c + 1);
						}
					    printf("|\n");
					}printf("\n\n======Compra Efetuada======\n\n");
				}
			}else{
			}
		}else if(codigo == 6){
			for(l = 0; l < lin2; l++){
				for(c = 0; c < colu2; c++){
					printf("|| %02i%c%02i ",l +1, cadeira[l][c], c + 1);
				}
			    printf("|\n");
			}printf("\n\n======Mapa Mostrado======\n\n");
			
		}else if(codigo == 7){
			ccl = conferindoCadeiras - ar;
			cv = 0.6 * conferindoCadeiras;
			if(tc < cv){
				printf("É necessario a venda de mais ingressos.\n");
				printf("\n======Fechamento Falhado======\n\n");
			}else{
				printf("Espetaculo fechado.\n");
				printf("\n\n======Fechamento Concluindo======\n\n");
			}
		}else if(codigo == 8){
			ccl = conferindoCadeiras - ar;
			printf("-----------------------------\n");
			printf("     Lugares Reservados: %i  \n", inteira);
			printf("     Lugares Ocupados: %i    \n", ar);
			printf("     Lugares Livres: %i      \n",  ccl);
			printf("     lugares Vendidos: %i    \n", tc);
			printf("     Valor Recebido: R$%.2f  \n", total);
			printf("-----------------------------\n");
			printf("\n======Parciais Mostradas======\n\n");	
		}
	}
}	


