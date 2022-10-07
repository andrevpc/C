#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

////Exercício 1
//int main(){
//	setlocale(LC_ALL, "Portuguese");
//	int Conta, I;
//	float Notas[20], Media;
//	Media = 0;
//	for(I=0;I<20;I++){
//		printf("Favor informar a nota %i: \n", I+1);
//		scanf("%f", &Notas[I]);
//		Media = Media + Notas[I];
//	}
//	Media = Media/20;
//	Conta = 0;
//	for(I=0;I<20;I++){
//		if(Notas[I]>Media)
//			Conta = Conta + 1;
//	}
//	printf("Média é: %5.2f. \n", Media);
//	printf("A quantidade de alunos que passaram é: %i.\n", Conta);
//	system("pause");
//	return(0);
//}

////Exercício 2
//int main(){
//	setlocale(LC_ALL, "Portuguese");
//	int PMenor, PMaior, I;
//	float Q[20], Maior, Menor;
//	for(I=0;I<20;I++){
//		printf("Favor informar um número positivo %i: \n", I+1);
//		scanf("%f", &Q[I]);
//		if (Q[I] < 0.0)
//			I = I - 1;
//	}
//	Maior = Q[0];
//	Menor = Q[0];
//	PMaior = 1;
//	PMenor = 1;
//	for(I=0;I<+20;I++){
//		if(Q[I] > Maior){
//			Maior = Q[I];
//			PMaior = I + 1;
//		}
//		if(Q[I] < Menor){
//			Menor = Q[I];
//			PMenor = I + 1;
//		}
//	}
//	printf("Maior valor: %5.2f, posição do maior valor: %i\n", Maior, PMaior);
//	printf("Menor valor: %5.2f, posição do menor valor: %i", Menor, PMenor);
//}

////Exercício 3
//int main(){
//	setlocale(LC_ALL, "Portuguese");
//	int I;
//	float A[10], M[10], X;
//	for(I=0;I<10;I++){
//		printf("Favor informar um número %i: \n", I+1);
//		scanf("%f", &A[I]);
//	}
//	printf("Favor informar o número X: \n");
//	scanf("%f", &X);
//	for(I=0;I<10;I++){
//		M[I] = A[I] * X;
//		printf("Vetor M[%i] = %5.2f.\n",I+1,M[I]);
//	}
//}

////Exercício 4
//int main(){
//	setlocale(LC_ALL, "Portuguese");
//	int A[15], X, I, aux;
//	for(I=0;I<15;I++){
//		printf("Favor informar um número %i: \n", I+1);
//		scanf("%i", &A[I]);
//	}
//	printf("Favor informar o número X: \n");
//	scanf("%i", &X);
//	aux = 0;
//	for(I=0;I<15;I++){
//		if (A[I] == X)
//			aux = I+1;
//		}
//	if(aux == 0)
//		printf("Não encontrado");
//	else
//		printf("O valor se encontra na posição: %i.\n",aux);
//	system("pause");
//	return(0);
//	}

////Exercício 5
//int main(){
//	setlocale(LC_ALL, "Portuguese");
//	int I, A[5], Q[5];
//	for(I=0;I<5;I++){
//		printf("Favor informar um número %i: \n", I+1);
//		scanf("%i", &A[I]);
//	}
//	for(I=0;I<5;I++){
//		Q[I] = A[I] * A[I];
//		printf("Vetor[%i] ao quadrado: %i\n", I+1, Q[I]);
//	}
//	system("pause");
//	return(0);
//	}

//Exercício 6
int main() {
	setlocale(LC_ALL, "portuguese");
	int I, Cod;
	float A[5];
	for(I=0; I<5;I++){
	printf("Favor informar um numero %i:\n", I+1);
	scanf("%f", &A[I]);
	}
	printf("Favor informar o código:\n");
	scanf("%i", &Cod);
	if(Cod==0)
	return(0);
	else if(Cod==1)
	for(I=0;I<5;I++)
	printf("Vetor[%i]=%5.2.\n", I+1, A[I]);
	else if(Cod==2)
	for(I=4;I>=0;I--)
	printf("Vetor[%i]=%5.2f.\n", I+1, A[I]);
	else
	printf("Código inválido.\n");
	system("pause");
	return(0);

system("pause");
return(0);
}
