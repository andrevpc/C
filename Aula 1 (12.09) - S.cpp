/*
5) Escreva uma fun��o que calcule e retorne a dist�ncia entre dois pontos (x1, y1) e
(x2, y2).
6) Fa�a uma fun��o que verifique se um valor � perfeito ou n�o. Um valor � dito
perfeito quando ele � igual a soma dos seus divisores excetuando ele pr�prio. (Ex: 6
� perfeito, 6 = 1 + 2 + 3, que s�o seus divisores). A fun��o deve retornar um valor
booleano.
7) Escreva uma fun��o media_final(p1, p2, ep1, ep2, ep3) que recebe as notas das
provas p1 e p2 e as notas dos exerc�cios-programa ep1, ep2 e ep3 de um aluno.
Devolve a m�dia final deste aluno. A m�dia final � dada por (2p+ep)/3, onde p =
(p1+2p2)/3 e ep = (ep1+2ep2+3ep3)/6.
8) Escreva uma fun��o que compara duas datas que s�o dadas na forma dia, m�s e
ano. A fun��o devolve 1 se a primeira data � maior que a segunda, 0 se s�o iguais e
-1 se a segunda � maior que a primeira.
9) Escreva uma fun��o que recebe, por par�metro, dois valores X e Z e calcula e
retorna X^Z (X elevado a Z).
10) Criar uma fun��o que verifique quantas vezes um n�mero inteiro x � divis�vel por um
n�mero inteiro y. A fun��o deve retornar -1 caso n�o seja poss�vel calcular
11) Escreva uma fun��o que recebe n maior que zero, e retorna seu fatorial.

12) Criar uma fun��o que calcule e retorne o n�mero de arranjos e outra que fa�a o
mesmo para combina��es. As entradas ser�o:
n = Quantidade total de elementos no conjunto
p = Quantidade de elementos por arranjo/combina��o
Siga as seguintes f�rmulas:

Arranjos:

Combina��es:

13) Escreva uma fun��o que recebe n maior que zero e devolve o n-�simo n�mero
harm�nico, dado pelo valor da soma:
1 + 1/2 + 1/3 + ... + 1/n

14) Escreva uma fun��o que recebe n maior que zero e devolve o valor da soma:
1/1! + 1/2! + 1/3! + ... + 1/n!
*/


//Exerc�cios: Fun��es
//1) Fa�a uma fun��o que recebe o raio de uma esfera e calcula o seu volume (v = 4/3.P
//.R3).
//
//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	float raio, pi, volume;
//	pi = 3.14;
//	printf("Insira o raio: ");
//	scanf("%f", &raio);
//	volume = (4.0/3.0)*pi*raio*raio*raio;
//	printf("O volume e %f",volume);
//}



//2) Escreva um procedimento que receba um n�mero inteiro e imprima o m�s
//correspondente ao n�mero. Por exemplo, 2 corresponde � �fevereiro�. O
//procedimento deve mostrar uma mensagem de erro caso o n�mero recebido n�o
//fa�a sentido.
//
//
//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	int numero;
//	printf("Insira um numero de 1 a 12: ");
//	scanf("%i", &numero);
//	switch (numero)
//	{
//		case 1: printf("Janeiro"); break;
//		case 2: printf("Fevereiro"); break;
//		case 3: printf("Marco"); break;
//		case 4: printf("Abril"); break;
//		case 5: printf("Maio"); break;
//		case 6: printf("Junho"); break;
//		case 7: printf("Julho"); break;
//		case 8: printf("Agosto"); break;
//		case 9: printf("Setembro"); break;
//		case 10: printf("Outubro"); break;
//		case 11: printf("Novembro"); break;
//		case 12: printf("Dezembro"); break;
//		default: printf("Erro"); break;
//	}
//}

//3) Fa�a uma fun��o que recebe um valor inteiro e positivo e retorna o valor l�gico
//Verdadeiro caso o valor seja primo e Falso em caso contr�rio.
//
//#include <stdio.h>
//#include <math.h>
//
//int main(){
//	int numero, primo;
//	printf("Insira um numero: ");
//	scanf("%d", &numero);
//	
//	int i;
//	for (i = 2; i<numero; i++){
//		if (numero%i == 0){
//		printf("O numero nao e primo");
//		return 0;
//		}	
//	}
//printf("O numero e primo");
//		
//}

//4) Escreva uma fun��o que receba dois n�meros inteiros x e y. Essa fun��o deve
//verificar se x � divis�vel por y. No caso positivo, a fun��o deve retornar 1, caso
//contr�rio zero.

#include <stdio.h>
#include <math.h>

int divisao(int x, int y){
	if (x%y == 0)
	return 1;
	else
	return 0;
}
int main(){
	int x, y, div, resultado;
	printf("Insira o x: ");
	scanf("%d", &x);
	printf("Insira o y: ");
	scanf("%d", &y);
	resultado = divisao(x,y);
	if (resultado == 1)
	printf("Divisivel");
	else
	printf("Nao divisivel");
}
