#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define m 3

int menu (){
	int r;
	printf("1 : exibir matriz\n");
	printf("2 : exibir a M�dia\n");
	printf("3 : sair\n");
	printf("\ndigite sua opi��o: ");
	scanf("%d", &r);
	return r;
	
}
void media (int MAT[][m]){
    int l, c ;
    float aux=0;
    for(l=0;l<m;l++){
   	for(c=0;c<m;c++){
   	aux = aux + MAT[l][c];
		       	
		}
    }	
	aux = aux/9;
	printf("M�dia : %.3f\n", aux);
} 
 
void exibir (int MAT[][m]){
	int l,c;
	for (l=0;l<m;l++){
	for(c=0;c<m;c++){
			
	printf("%d\t", MAT[l][c]);
		}
	printf("\n");
	}
}

main (){
	
	setlocale(LC_ALL, "portuguese_Brazil");
		
	int l,c,r,MAT[m][m];
		
	for (l=0; l<m;l++){
	for (c=0;c<m;c++){
	printf("Informe o valor da posi��o |%d||%d|: ", l,c);
	scanf("%d", &MAT[l][c]);
	    }
	}
	
	system("cls");
	r=menu();
	
 		while (r!=3){
 			system("cls");
 			if (r==1)	exibir(MAT);
 			else if (r==2) media(MAT);
 			printf("\n");
 			r=menu();
		 }
	
	return 0;
}
