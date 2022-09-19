//// Exercicio 1
//	#include <stdlib.h>
//	#include <stdio.h>
//	#include <string.h>
//	#include <locale.h>
//	int main(){
//	setlocale(LC_ALL,"portuguese");
//	float n1;
//	printf ("Informe um número: \n");
//	scanf("%f", &n1);
//	if (n1 >= 0)
//		printf("Esse número é positivo \n");
//	if (n1 < 0)
//		printf("Esse número é negativo \n");
//	system("pause");
//	return(0);
//}

//// Exercicio 2
//	#include <stdlib.h>
//	#include <stdio.h>
//	#include <string.h>
//	#include <locale.h>
//	int main(){
//	setlocale(LC_ALL,"portuguese");
//	float a1, a2, media;
//	printf ("Informe a nota da primeira avaliação: \n");
//	scanf("%f", &a1);
//	printf ("Informe a nota da segunda avaliação: \n");
//	scanf("%f", &a2);
//	media = (a1+a2)/2;
//	if (media >= 7)
//		printf("você foi aprovado com %5.2f pontos \n", media);
//	if (media < 7)
//		printf("você foi reprovado com %5.2f pontos \n", media);
//	system("pause");
//	return(0);
//}

//// Exercicio 3
//	#include <stdlib.h>
//	#include <stdio.h>
//	#include <string.h>
//	#include <locale.h>
//	int main(){
//	setlocale(LC_ALL,"portuguese");
//	float n1, n2;
//	printf ("Informe um número: \n");
//	scanf("%f", &n1);
//	printf ("Informe um outro número: \n");
//	scanf("%f", &n2);
//	if (n1 > n2)
//		printf("o maior número é: %5.2f. \n", n1);
//	if (n1 < n2)
//		printf("o maior número é: %5.2f. \n", n2);
//	system("pause");
//	return(0);
//}

//// Exercicio 4
//	#include <stdlib.h>
//	#include <stdio.h>
//	#include <string.h>
//	#include <locale.h>
//	int main(){
//	setlocale(LC_ALL,"portuguese");
//	float n1, n2;
//	printf ("Informe um número: \n");
//	scanf("%f", &n1);
//	printf ("Informe um outro número: \n");
//	scanf("%f", &n2);
//	if (n1 >= n2)
//		printf("a ordem crescente é: %5.2f;", n2);
//		printf (" %5.2f. \n", n1);
//	if (n1 < n2)
//		printf("a ordem crescente é: %5.2f;", n1);
//		printf (" %5.2f. \n", n2);
//	system("pause");
//	return(0);
//}

//// Exercicio 5
//	#include <stdlib.h>
//	#include <stdio.h>
//	#include <string.h>
//	#include <locale.h>
//	int main(){
//	setlocale(LC_ALL,"portuguese");
//	float L1, L2, L3;
//	printf ("Informe um lado do triângulo: \n");
//	scanf("%f", &L1);
//	printf ("Informe um outro lado do triângulo: \n");
//	scanf("%f", &L2);
//	printf ("Informe o lado restante do triângulo: \n");
//	scanf("%f", &L3);
//	if (L1==L2)
//		if (L1==L3)
//			printf("Esse triângulo é equilátero. \n");
//		else
//			printf("Esse triângulo é isósceles. \n");
//		else
//		if (L1==L3)
//			printf("Esse triângulo é isósceles. \n");
//		else
//			if (L2==L3)
//				printf("Esse triângulo é isósceles. \n");
//			else
//				printf("este triângulo é escaleno \n");
//	system("pause");
//	return(0);
//}

//// Exercicio 6
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <locale.h>
//#include <math.h>
//	int main(){
//	setlocale(LC_ALL,"portuguese");
//	float NL, L, A;
//	printf ("Informe o número de lados do polígono: \n");
//	scanf("%f", &NL);
//		printf ("Informe a medida dos lados: \n");
//	scanf("%f", &L);
//	if (NL==3){
//		A = ((pow(L,2))*sqrt(3.0)/4.0);
//		printf("Esse polígono é um triângulo com lados medindo %5.2f e área equivalente à %5.2f. \n", L, A);
//	}else
//		if (NL==4){
//			A = (pow(L,2));
//			printf("Esse polígono é um quadrado com lados medindo %5.2f e área equivalente à %5.2f. \n", L, A);
//		}else
//			if (NL==5){
//				printf("Esse polígono é um pentágono com lados medindo %5.2f. \n", L);
//			}else
//				if (NL>5){
//					printf("esse polígono não foi identificado. \n");}
//	system("pause");
//	return(0);
//}
