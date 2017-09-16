// Questão 12 - Exibir a matriz, o maior valor e o menor valor dessa matriz.

#include <stdio.h>
#include <stdlib.h>
#define tam 3

int L,C;

void menor (int mat[tam][tam]){

    int mn=mat[0][0];

    for (L=0;L<tam;L++){
		for (C=0;C<tam;C++){

    if (mat[L][C]<mn){
        mn=mat[L][C];
            }
        }

    }
    printf ("\nMenor: %d",mn);

}
void maior (int mat[tam][tam]){
    int ma=mat[0][0];

    for (L=0;L<tam;L++){
		for (C=0;C<tam;C++){

    if (mat[L][C]>ma){
        ma=mat[L][C];
            }
        }

    }
    printf ("\nMaior: %d",ma);
}


main (){
	int MAT[tam][tam];


	printf("Preenchendo a matriz MAT\n");
	for (L=0;L<tam;L++){
		printf("\nPreenchendo a linha %d\n",L);
		for (C=0;C<tam;C++){
			printf("Informe o valor da coluna |%d| : ",C);
			scanf("%d",&MAT[L][C]);
		}
	}


	for (L=0;L<tam;L++){
		for (C=0;C<tam;C++){
			printf("\nlinha |%d| coluna |%d|: [%d]",L,C,MAT[L][C]);
		}
	}

	menor(MAT);
	maior (MAT);


	 system("cls"); //usado para limpar a tela

}
