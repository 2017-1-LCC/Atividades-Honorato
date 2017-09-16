// Questão 7 - Mostre a matriz MAT e sua transposta.

#include <stdio.h>
#include <stdlib.h>

 int Transposta (int matriz[3][3]){
//Variaveis
 	int MT[3][3];
 	int l,c;
 	
 	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{
			MT[l][c]= matriz[c][l];		
		}	
	} 	
 	printf("\n\n\tMatriz\n\n");
//Procedimento	
	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{		
			printf("%d\t",matriz[l][c]);	
		}
		printf("\n");
	}
	printf("\n\n Matriz Transposta\n\n");
	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{
			printf("%d\t",MT[l][c]);
		}
		printf("\n");
	}
	
	 printf("\n\n");	 
		  
 	
 }
 main (){
 // Variaveis	
	int matriz[3][3];		
	int l, c;
	int transposta[3][3];
	printf("\t\t\t***Preenchendo a Matriz***\n\n");
 //Procedimentos   					
   for(l=0; l<3; l++)
   {    		  
   	  	for(c=0; c<3; c++)
		{
	   	 	printf("Digite o valor: ");				  	
	   		scanf("%d", &matriz[l][c]);	 
		}
		
    }
    Transposta(matriz);
	

	system("pause");
  	             
}


	
