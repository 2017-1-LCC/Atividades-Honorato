// Questão 15 - Mostrar a matriz e os elementos abaixo da diagonal secundária.

#include <stdio.h>
#include <locale.h>
#define m 3 //define um tamanho para a matriz (linha X coluna)

int matriz ( int c[m][m]){  //mostra a matriz completa
    int a, b;
    printf("\t\tConfira sua matriz\n");
	for(a=0;a<m;a++){
		for(b=0;b<m;b++){
			printf("\t |%i|",c[a][b]);
		}
	  printf("\n");//apenas para organizar a matriz em tabela
	}	
}

int digsec ( int c[m][m]){ //mostra apenas a diagonal secundária
    int a, b;
    printf("\t\tDiagonal Secundária\n");
    	for(a=0;a<m;a++){
	      for(b=0;b<m;b++){
	          if (b==(m-1-a)){ //faz a leitura da matriz e indentifica as celulas da diagonal secundária
	          printf(" |%i|", c[a][b]);
	         }
	     } 
    printf("\n");
	}
}
main () {
	setlocale(LC_ALL, "portuguese_Brazil");
	int l, p, c[m][m];
	for(l=0;l<m;l++){ //é feita a tribuição de valores 
		printf("\n\t\t Preencha a linha %i: \n",l+1);
		for(p=0;p<m;p++){
			printf("Dê um valor pra coluna %i: ",p+1);
			scanf("%i",&c[l][p]);
		}
	}
printf("\n");
    matriz (c); //chama a função para exibir a matriz completa
printf("\n");
    digsec (c); //chama a função para exibir a diagonal secundária
return 0;
} 
