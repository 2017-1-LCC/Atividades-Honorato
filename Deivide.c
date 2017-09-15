// Atividade Honorato - Questão 19

#include<stdio.h>
#define t 3
int menu(){                                                      //menu
	int r;
	printf("\n\t\tEscolha a funcao a ser executada :\n");
	printf("1-SOMA\n");
	printf("2-TODOS OS ELEMENTOS\n");
	printf("3-SAIR\n");
	scanf("%d",&r);
	return r;
}

int soma(int mat[][t], int m[][t], int n[][t]){   //soma
	int so[t][t],l,c;
	for (l=0;l<t;l++){
		for(c=0;c<t;c++){
			so[l][c]=mat[l][c]+m[l][c]-n[l][c];	
			printf("Soma : %d\n",so[l][c]);
		} 	
	}       	
}   

int todos(int mat[t][t], int m[t][t], int n[t][t]){  //todos os elementos
	int l,c;
	printf("'Matriz MAT'\n");
	for (l=0;l<t;l++){                                        //exibindo os valores da matriz MAT
		for(c=0;c<t;c++){
			printf("    |%d| ",mat[l][c]);
		}
		printf("\n");
 	}
	printf("'Matriz M'\n");                                      //exibindo os valores da matriz M
	for (l=0;l<t;l++){
		for(c=0;c<t;c++){
			printf("    |%d| ",mat[l][c]);
		}
		printf("\n");
	 }
	printf("'Matriz N'\n");                                      //exibindo os valores da matriz N
	for (l=0;l<t;l++){
		for(c=0;c<t;c++){
			printf("    |%d| ",mat[l][c]);
		}
		printf("\n");
	}
}

main(){                                                      //função principal
	int l,r,c,mat[t][t],n[t][t],m[t][t];
	printf("'Matriz MAT'");                                      //preenchendo os valores da matriz MAT
	for (l=0;l<t;l++){
		printf("\t\tLinha %d\n",l+1);
		for(c=0;c<t;c++){
			printf("Informe um valor para a posicao %d : ",c+1);
			scanf("%d",&mat[l][c]);	
		}
	}
	printf("'Matriz M'");                                        //preenchendo os valores da matriz M
	for (l=0;l<t;l++){
		printf("\t\tLinha %d\n",l+1);
		for(c=0;c<t;c++){
			printf("Informe um valor para a posicao %d : ",c+1);
			scanf("%d",&m[l][c]);	
		}
	}   
	printf("'Matriz N'");                                        //preenchendo os valores da matriz N
	for (l=0;l<t;l++){
		printf("\t\tLinha %d\n",l+1);
		for(c=0;c<t;c++){
			printf("Informe um valor para a posicao %d : ",c+1);
			scanf("%d",&n[l][c]);	
		}
	}
	r=menu();                                                    //chamando a função menu
	while(r!=3) {
		if(r==1) soma(mat,m,n);
		if(r==2) todos(mat,m,n);
		if(r>2) printf("NUMERO INVALIDO");
		r=menu();
	}
}
