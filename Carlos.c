/*Fazer uma função numa matriz e somar os valores da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>
#define tam 3 //constante global

int l,c; //variáveis globais



int matriz (int matriz[][tam]){ //função
    int aux1=0,aux=0;
    for (l=0;l<tam;l++){
		for (c=0;c<tam;c++){
            if (l == c){  // sempre que a linha for = coluna aux recebe o valor da matriz na posição mat [x][x] EX: l=0 e c=0 
                aux = matriz[l][c]; //então a aux recebe matriz [l]][c]. 	
                aux1 = aux1+aux; // aux1 é uma acumuladora, ele vai receber e somar todos os valores.
			}
		}
	}


	return aux1; //Retorna o valor da aux1 pra função

}

main (){
    int mat[tam][tam];
    int soma;

	printf("Preenchendo a matriz MAT\n");
	for (l=0;l<tam;l++){
		printf("\nPreenchendo a linha %d\n",l+1);
		for (c=0;c<tam;c++){
			printf("Informe o valor da coluna |%d| : ",c+1);
			scanf("%d",&mat[l][c]); //Simplismente preencher a matriz. 
		}
	}
	printf("\n\tMatriz: \n");
	printf("\n");

	for (l=0;l<tam;l++){
		for (c=0;c<tam;c++){
			printf(" [%d]\t ",mat[l][c]);
		}
		printf("\n"); //Simplismente mostrando a matriz.
	}

	soma = matriz (mat); //*OBS: Aqui a função ta sendo chamada, o valor retornado lá em cima da aux1 é jogado na variável soma.
	printf ("\n\nValor da soma da diagonal principal é: %d\n",soma); //Aqui é só pra mostrar a soma.



	return 0;

}
