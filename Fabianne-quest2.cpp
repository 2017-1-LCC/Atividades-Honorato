#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 3

int menu(){
	int r;
	printf("----------------------\n");
	printf("1 - Matriz\n");
	printf("2 - Multiplicação da DS\n");
	printf("3 - Sair\n");
	printf("----------------------\n");
	printf("Digite sua opção\n");
	printf("> ");
	scanf("%d", &r);
	return r;
}

void exibematriz (int mat[][tam]) {
	int l, c;
	printf("\n   ---- Matriz ----\n\n");
	for (l=0; l<tam; l++) {
		for (c=0; c<tam; c++) {
			printf("   |%d| ", mat[l][c]);
		}
		printf("\n");
	}
	printf("\n");
}

void diagonalsec (int mat[][tam]) {
	int l, c, diagSec=1;
	for(l=0; l<tam; l++) {
		for(c=0; c<tam; c++) {
			if (l+c==tam-1) {
				diagSec*=mat[l][c];
			}
		}
	}
	printf("\n");
	printf("O valor do produto dos elementos da DS é: %d", diagSec);
	printf("\n");
}

main (){
	setlocale(LC_ALL,"portuguese_Brazil");
	int mat[tam][tam];
	int l, c, diagSec, r;
	for (l=0; l<tam; l++) {
		printf("Preenchendo a %d° linha\n", l+1);
		for (c=0; c<tam; c++) {
			printf("Informe o %d° valor: ", c+1);
			scanf("%d", &mat[l][c]);	
		}
		system("cls");
	}
	r=menu();
	do {
		
		system("cls");
		if (r==1) exibematriz (mat);
		if (r==2) diagonalsec (mat);
		r=menu();
	}
	while(r!=3);
}
