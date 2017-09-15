// Atividade Honorato - Questão 17

/*
	Matéria: Algoritmo introdução a programação
	Professor: José Honorato
	Aluno: André Paulo Silva Liro
	Data: 14/09/2017
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 5

// prototipos das funções
int triSup(float matriz[tam][tam]);

int triSup(float matriz[tam][tam])
{
	int x, y, i;
	printf("\n\tMatriz Completa\n");
	printf("-------------------------------------\n");
	//header
	for (int x = 0; x < tam; x++) {
		printf("\tc-%d",x);
	}
	printf("\n");

	// for para exibir a matriz completa
	for (x = 0; x < tam; x++) {
		printf("l-%d", x);
		for (y = 0; y < tam; y++) {
			printf("\t%.f", matriz[x][y]);
		}
		printf("\n");
	}

	printf("-------------------------------------\n");
	printf("\n\tTriangulo Superior\n");
	printf("-------------------------------------\n");

	// cabeçalho
	for (x = 1; x <= tam; x++) {
		printf("\tc-%d",x);
	}
	printf("\n");

	// for para exibir o triangulo superior
	for (x = 0; x < tam; x++) {
		printf("l-%d", x + 1);
		for (i = 0; i <= x; i++) {
			printf("\t-");
		}
		for (y = x + 1; y < tam; y++) {
			printf("\t%.f", matriz[x][y]);
		}
		printf("\n");
	}
	printf("-------------------------------------\n");
	return 0;
}


int main ()
{
	float MAT[tam][tam];
	int L,C;

	// função para gerar uma semente aleatória para rand(). Também inclui o cabeçalho time.h;
	srand(time(NULL));

	printf("Preenchendo a matriz MAT\n");
	for (L=0;L<tam;L++){
		printf("\nPreenchendo a linha %d\n",L);
		for (C=0;C<tam;C++){
			printf("\nInforme o valor da coluna |%d| : ",C);
			MAT[L][C] = rand() % 100;
			printf("O valor para MAT[%d][%d] é: %.f", L, C, MAT[L][C]);
			//scanf("%f",&MAT[L][C]);
		}
	}
	//system("cls"); //usado para limpar a tela no windows
	system("clear"); //limpar a tela no linux;
	triSup(MAT);

	return 0;

}
