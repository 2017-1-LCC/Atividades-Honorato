// Questão 10 - Ler matriz N, calcular o produto de MAT e N, colocando os resultados na matriz P e exibir as três matrizes.

#include <stdio.h>
#define tam 3

void criaProduto(int p[][tam], int n[][tam]) {
	int cont1, cont2;

    for(cont1 = 0; cont1 < tam; cont1++) {
        for(cont2 = 0; cont2 < tam; cont2++) {
            p[cont1][cont2] = n[cont1][cont2] * n[cont1][cont2];
        }
    }
    printf("\n\n O PRODUTO DA MATRIZ E \n\n");
	for(cont1 = 0; cont1 < tam; cont1++) {
        for(cont2 = 0; cont2 < tam; cont2++) {
            printf("%d\t",p[cont1][cont2]);
        }
        printf("\n");
    }
};

void mostraMatrizes(int p[][tam], int n[][tam]) {
	int cont1, cont2;

    printf("\n\n A MATRIZ N \n\n");
    for(cont1 = 0; cont1 < tam; cont1++) {
        for(cont2 = 0; cont2 < tam; cont2++) {
            printf("%d\t",n[cont1][cont2]);
        }
        printf("\n");
    }

    printf("\n\n A MATRIZ MAT \n\n");
    for(cont1 = 0; cont1 < tam; cont1++) {
        for(cont2 = 0; cont2 < tam; cont2++) {
            printf("%d\t",n[cont1][cont2]);
        }
        printf("\n");
    }
}



main() {
    int cont1, cont2,result[3][3], n[3][3], p[3][3];

    for(cont1 = 0; cont1 < 3; cont1++) {
        for(cont2 = 0; cont2 < 3; cont2++) {
            printf("insira o valor: ");
            scanf("%d",&n[cont1][cont2]);
        }
    }

	criaProduto(p, n);
	mostraMatrizes(p, n);

}
