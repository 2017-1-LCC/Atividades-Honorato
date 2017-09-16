#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 3

int Menorindice(float MAT[tam][tam]){
int l,c, Ml = 0, Mc = 0, menor = MAT[0][0];

    for(l=0;l<tam; l++){
        for(c=0; c<tam; c++){
            printf("%.f\t", MAT[l][c]);
            if (MAT[l][c] < menor) {
                menor = MAT[l][c];
                Ml = l;
                Mc = c;
            }
        }
        printf("\n");
    }
    printf("o menor indice da matriz eh: Matriz[%d][%d] \n", Ml, Mc);
    return 0;
}


int main (){
	float MAT[tam][tam];
	int L,C;

	printf("Preenchendo a matriz MAT\n");
	for (L=0;L<tam;L++){
		printf("\nPreenchendo a linha %d\n",L);
		for (C=0;C<tam;C++){
			printf("\nInforme o valor da coluna |%d| : ",C);
			scanf("%f",&MAT[L][C]);
		}
	}
	//system("cls"); //usado para limpar a tela no windows
	system("cls"); //limpar a tela no linux;
    Menorindice(MAT);
    return 0;
}
