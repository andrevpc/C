#include <stdio.h>
////Torre da Hanoi
//
//void T(int n, char origem, char trabalho, char destino){
//	if (n==1){
//		printf("\nMova %c para % c", origem, destino);
//		return;
//	}else{
//		T(n-1, origem, destino, trabalho);
//		printf("\nMova %c para %c", origem, destino);
//		T(n-1, trabalho, origem, destino);
//	}
//}
//
//main(){
//	int n;
//	printf("Digite o numero de discos: ");
//	scanf("%d",&n);
//	printf("Para resolver a torre de hanois faca: \n\n");
//	T(n,'A','B','C');
//	printf("\n");
//	return 0;
//}

// Merge Sort
main(){
	int lista1[5];
	int lista2[] = {5,4,3,2,1};
	int lista3[5] = {5,4,3,2,1};
	
	for (int i=0; i<5; i++){
		printf("i: %d\n", i);
		printf("Lista 1: %d\n", lista1[i]);
		printf("Lista 2: %d\n", lista2[i]);
		printf("Lista 3: %d\n\n", lista3[i]);
	}
	printf("Lista 3: %d\n\n", lista3[6]);
	printf("Tamanho da lista 3: %d\n\n", sizeof(lista3)/sizeof(int));
}
