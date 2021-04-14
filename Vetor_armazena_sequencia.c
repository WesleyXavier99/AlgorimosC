/*QUESTÃO 04: Fazer uma função que armazene em um vetor os 50 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...*/
#include<stdio.h>
#define QUANT 50
int Armazenar(int vetor[])
{
	int i,j;
	vetor[0]=1;
	printf("%d ",vetor[0]);
	
	for(i=1, j=1;i<QUANT;i++,j++)
	{
		vetor[i]=vetor[i-1]+j;
		printf("%d ",vetor[i]);
		
	}
}
void main()
{
	int vetor[QUANT];
	
	Armazenar(vetor);
}
