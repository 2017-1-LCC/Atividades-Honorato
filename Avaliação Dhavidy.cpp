#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define T 3

int menu (){
	int Ret;
	printf("1 - EXIBIR MATRIZ\n");
	printf("2 - EXIBIR TRIANGULO INFERIOR DA PRINCIPAL\n");
	printf("3 - SAIR\n");
	printf("\nDIGITE SUA OPÇÃO: ");
	scanf("%d", &Ret);
	return Ret;
	
}

void triinfer (int MAT[][T]){
	int l,c;
	for (l=0;l<T;l++){
		for (c=0;c<T;c++){
			if (c>=l){
				printf(" ");
			} else printf("%d\t", MAT[l][c]);
		}
		printf("\n");
	}
}

void exibir (int MAT[][T]){
	int l,c;
	for (l=0;l<T;l++){
		for(c=0;c<T;c++){
			printf("%d\t", MAT[l][c]);
		}
		printf("\n");
	}
}

main (){
	
	setlocale(LC_ALL, "portuguese_Brazil");
		
	int l,c,r,MAT[T][T];
		
	for (l=0; l<T;l++){
	    for (c=0;c<T;c++){
	    	printf("Informe o valor da posição %d %d: ", l,c);
	    	scanf("%d", &MAT[l][c]);
	    }
	}
	
	system("cls");
	Ret=menu();
	
 		while (Ret!=3){
 			system("cls");
 			if (Ret==1)	exibir(MAT);
 			else if (Ret==2) triinfer(MAT);
 			printf("\n");
 			Ret=menu();
		 }
	
	return 0;
}
