#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 3

// Questão 06- Mostrar a matriz e os elementos acima da Diagonal Secundária

int menu (){
	int r;
	printf("----------------------\n");
	printf("\tMATRIZ\n");
	printf("----------------------\n");
	printf("1 - EXIBIR MATRIZ\n");
	printf("2 - TRIÂNGULO SUPERIOR DA DIAGONAL SECUNDÁRIA\n");
	printf("3 - SAIR\n");
	printf("\nDIGITE SUA OPÇÃO: ");
	scanf("%d", &r);
	return r;
}

void exibir(int MAT[][tam]){
    int l,c;

    for(l=0;l<tam;l++){
        for(c=0;c<tam;c++)
            printf("%d\t", MAT[l][c]);
        printf("\n");
    }

}
/*
			DIAGONAL SECUNDÁRIA:

		coluna 0	coluna 1	coluna 2

linha 0							3
linha 1				5			
linha 2		7					
*/
void trisupers (int MAT[][tam]){
	int l,c;
	for (l=0;l<2;l++){
		for (c=0;c<2;c++){
			if (l==0 || l==1 && c!=1){
				printf("%d\t", MAT[l][c]);
			} else printf(" \t");
		}
		printf("\n");
	}
	printf("\n");
}
	
int main (void){
	
	setlocale(LC_ALL, "portuguese_Brazil");
	
	int l,c,r, MAT[tam][tam];

	for (l=0; l<3;l++){
		for (c=0; c<3;c++){
			printf("Informe o Valor da Posição |%d||%d|: ", l,c);
			scanf("%d", &MAT[l][c]);
		}
	}
	system("cls");
	r=menu();
	
	while (r!=3){
		system("cls");
		if (r==1) exibir(MAT);
		if (r==2) trisupers(MAT);
		r = menu();
	}
	

}


