#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

////Exercício 1
//int main(){
//setlocale(LC_ALL,"portuguese");
//char texto[100];
//int tamanho;
//printf ("Informar o texto: \n");
//gets(texto);
//tamanho = strlen(texto);
//printf("Número de caracteres do texto: %i. \n", tamanho);
//system("pause");
//return(0);
//}

////Exercício 2
//int main(){
//setlocale(LC_ALL,"portuguese");
//char texto1[21], texto2[21];
//printf ("Informar o texto: \n");
//gets(texto1);
//strcpy(texto2, texto1);
//printf("Texto 1: %s. \n", texto1);
//printf("Texto 2: %s. \n", texto2);
//system("pause");
//return(0);
//} 

////Exercicio 3
//int main(){
//setlocale(LC_ALL,"portuguese");
//char nome[60], cargo[60];
//float salario, novosalario, diferenca;
//printf ("Informar o nome: \n");
//gets(nome);
//printf ("Informar o cargo: \n");
//gets(cargo);
//printf("Informar o salario: \n");
//scanf("%f",&salario);
//novosalario = salario + salario * 30.0 / 100.0;
//diferenca = novosalario - salario;
//printf("Nome: %s. \n", nome);
//printf("Cargo: %s. \n", cargo);
//printf("Salario atual: %5.2f.\n",salario);
//printf("Salario atual: %5.2f.\n",novosalario);
//printf("Diferença: %5.2f.\n",diferenca);
//system("pause");
//return(0);
//}

////Exercicio 4
//int main(){
//setlocale(LC_ALL,"portuguese");
//char n1[60], n2[60], n3[60], n4[60], n5[60];
//char s1[60], s2[60], s3[60], s4[60], s5[60];
//printf ("Informar o nome 1: \n");
//gets(n1);
//printf("Informar o sobrenome 1: \n");
//gets(s1);
//printf ("Informar o nome 2: \n");
//gets(n2);
//printf("Informar o sobrenome 2: \n");
//gets(s2);
//printf ("Informar o nome 3: \n");
//gets(n3);
//printf("Informar o sobrenome 3: \n");
//gets(s3);
//printf ("Informar o nome 4: \n");
//gets(n4);
//printf("Informar o sobrenome 4: \n");
//gets(s4);
//printf ("Informar o nome 5: \n");
//gets(n5);
//printf("Informar o sobrenome 5: \n");
//gets(s5);
//strcat(n1," ");
//strcat(n1,s1);
//strcat(n2," ");
//strcat(n2,s2);
//strcat(n3," ");
//strcat(n3,s3);
//strcat(n4," ");
//strcat(n4,s4);
//strcat(n5," ");
//strcat(n5,s5);
//printf("Nome 1: %s. \n", n1);
//printf("Nome 2: %s. \n", n2);
//printf("Nome 3: %s. \n", n3);
//printf("Nome 4: %s. \n", n4);
//printf("Nome 5: %s. \n", n5);
//system("pause");
//return(0);
//}

////Exercicio 5
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#include<locale.h>
//int main() {
//setlocale(LC_ALL,"portuguese");
//char texto1[30], texto2[30];
//printf("Favor informar um texto:\n");
//gets(texto1);
//printf("Favor informar outro texto:\n");
//gets(texto2);
//printf("Texto 1: %s.\n", texto1);
//printf("Segunda letra: %c.\n", texto1[1]);
//printf("Texto 2: %s.\n", texto1);
//printf("Segunda letra: %c.\n", texto2[1]);
//system("pause");
//return(0);
//}

////Exercicio 6
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//#include<locale.h>
//int main() {
//setlocale(LC_ALL,"portuguese");
//char nome[30];
//float n1, n2, n3, media;
//printf("Favor informar o nome:\n");
//gets(nome);
//printf("Favor informar a nota 1 :\n");
//scanf("%f", &n1);
//printf("Favor informar a nota 2 :\n");
//scanf("%f", &n2);
//printf("Favor informar a nota 3 :\n");
//scanf("%f", &n3);
//media=(n1+n2+n3)/3;
//printf("O nome do aluno é: %s", nome);
//printf("\n A média é: %.2f", media);
//system("pause");
//return(0);
//}
