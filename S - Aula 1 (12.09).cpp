#include <stdio.h>
#include <math.h>
/*
10) Criar uma função que verifique quantas vezes um número inteiro x é divisível por um
número inteiro y. A função deve retornar -1 caso não seja possível calcular
11) Escreva uma função que recebe n maior que zero, e retorna seu fatorial.
12) Criar uma função que calcule e retorne o número de arranjos e outra que faça o
mesmo para combinações. As entradas serão:
n = Quantidade total de elementos no conjunto
p = Quantidade de elementos por arranjo/combinação
Siga as seguintes fórmulas:
Arranjos:
A = n!/(n-p)!
Combinações:
C = n!/p!(n-p)!
13) Escreva uma função que recebe n maior que zero e devolve o n-ésimo número
harmônico, dado pelo valor da soma:
1 + 1/2 + 1/3 + ... + 1/n
14) Escreva uma função que recebe n maior que zero e devolve o valor da soma:
1/1! + 1/2! + 1/3! + ... + 1/n!
*/


//Exercícios: Funções
//1) Faça uma função que recebe o raio de uma esfera e calcula o seu volume (v = 4/3.P
//.R3).
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



//2) Escreva um procedimento que receba um número inteiro e imprima o mês
//correspondente ao número. Por exemplo, 2 corresponde à “fevereiro”. O
//procedimento deve mostrar uma mensagem de erro caso o número recebido não
//faça sentido.
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

//3) Faça uma função que recebe um valor inteiro e positivo e retorna o valor lógico
//Verdadeiro caso o valor seja primo e Falso em caso contrário.
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

//4) Escreva uma função que receba dois números inteiros x e y. Essa função deve
//verificar se x é divisível por y. No caso positivo, a função deve retornar 1, caso
//contrário zero.
//#include <stdio.h>
//#include <math.h>
//
//int divisao(int x, int y){
//	if (x%y == 0)
//	return 1;
//	else
//	return 0;
//}
//int main(){
//	int x, y, div, resultado;
//	printf("Insira o x: ");
//	scanf("%d", &x);
//	printf("Insira o y: ");
//	scanf("%d", &y);
//	resultado = divisao(x,y);
//	if (resultado == 1)
//	printf("Divisivel");
//	else
//	printf("Nao divisivel");
//}

//5) Escreva uma função que calcule e retorne a distância entre dois pontos (x1, y1) e
//(x2, y2).
//int main(){
//	float x1, x2, y1, y2, dx, dy, pit;
//	printf("Insira o x1: ");
//	scanf("%f", &x1);
//	printf("Insira o y1: ");
//	scanf("%f", &y1);
//	printf("Insira o x2: ");
//	scanf("%f", &x2);
//	printf("Insira o y2: ");
//	scanf("%f", &y2);
//	dx = x2 - x1;
//	dy = y2 - y1;
//	printf("A distancia em vetor: %.2fi %.2fj", dx, dy);
//	pit = pow((pow (dx, 2)+pow (dy, 2)),0.5);
//	printf("\nA distancia em modulo: %.2f", pit);
//}

//6) Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito
//perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6
//é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar um valor
//booleano.
//
//bool perfeito(int num){
//	int aux, i;
//	aux = 0;
//	for (i=num/2;i!=0;i--){
//		if (num%i == 0) aux = aux + i;
//	}
//	if (aux == num) return true;
//	else
//		return false;
//}
//
//int main (){
//	int num, aux, i, result;
//	printf("Insira o numero: ");
//	scanf("%d", &num);
//	if (perfeito(num) == true) printf("True");
//	else
//		printf("False");
//	result = (perfeito(num) == true) ? printf("True") : printf("False");
//}

//7) Escreva uma função media_final(p1, p2, ep1, ep2, ep3) que recebe as notas das
//provas p1 e p2 e as notas dos exercícios-programa ep1, ep2 e ep3 de um aluno.
//Devolve a média final deste aluno. A média final é dada por (2p+ep)/3, onde p =
//(p1+2p2)/3 e ep = (ep1+2ep2+3ep3)/6.
//float mediafinal(float p1, float p2, float ep1, float ep2, float ep3){
//	float media_final, media_p, media_ep;
//	media_p = (p1+2*p2)/3;
//	media_ep = (ep1+2*ep2+3*ep3)/6;
//	media_final = (2*media_p+media_ep)/3;
//	return media_final;
//}
//int main (){
//	float p1, p2, ep1, ep2, ep3;
//	printf("Insira a nota da p1: ");
//	scanf("%f", &p1);
//	printf("Insira a nota da p2: ");
//	scanf("%f", &p2);
//	printf("Insira a nota da ep1: ");
//	scanf("%f", &ep1);
//	printf("Insira a nota da ep2: ");
//	scanf("%f", &ep2);
//	printf("Insira a nota da ep3: ");
//	scanf("%f", &ep3);
//	printf("%f", mediafinal(10,10,10,10,10));
//}

////8) Escreva uma função que compara duas datas que são dadas na forma dia, mês e
////ano. A função devolve 1 se a primeira data é maior que a segunda, 0 se são iguais e
////-1 se a segunda é maior que a primeira.
//int data(int dia1,int mes1,int ano1,int dia2,int mes2,int ano2){
//	int aux1, aux2;
//	aux1 = dia1+mes1*30+ano1*365;
//	aux2 = dia2+mes2*30+ano2*365;
//	if (aux1 > aux2)
//	return 1;
//	else if (aux2 > aux1)
//	return -1;
//	else
//	return 0;
//}
//
//int main(){
//	int dia1,mes1,ano1,dia2,mes2,ano2;
//	printf("Insira o dia 1: ");
//	scanf("%d", &dia1);
//	printf("Insira o mes 1: ");
//	scanf("%d", &mes1);
//	printf("Insira o ano 1: ");
//	scanf("%d", &ano1);
//	printf("Insira o dia 2: ");
//	scanf("%d", &dia2);
//	printf("Insira o mes 2: ");
//	scanf("%d", &mes2);
//	printf("Insira o ano 2: ");
//	scanf("%d", &ano2);
//	printf("%i", data(dia1,mes1,ano1,dia2,mes2,ano2));
//}

//9) Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula e
//retorna X^Z (X elevado a Z).
float elevado(float x,float z){
	return pow(x,z);
}
int main(){
	float x,z;
	printf("Insira o x: ");
	scanf("%f", &x);
	printf("Insira o z: ");
	scanf("%f", &z);
}
