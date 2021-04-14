/*QUESTAO 02:Implementar uma funcao que, dado um vetor de reais,
troque o 1 e o 2 a elementos, em seguida o 3 e o 4 elementos e
assim sucessivamente, ate se chegar ao final do vetor.*/
#include<stdio.h>
#define QUANT 10

float TrocarElementos(float vetor[])
{
	int k,j ;
	float aux2;
	for(k=0;k<QUANT;k+=2)
	{
			aux2=vetor[k];
			vetor[k]=vetor[k+1];
			vetor[k+1]=aux2;	
	}
	
	printf("\n");
	
	for(j=0;j<QUANT;j++)
	{
		printf("posicao %d : %f\n",j,vetor[j]);
	}
	return 0;
}
int main()
{
	float vetor[QUANT];
	int i,j,k;
	float aux2;

	printf("Digite 6 valores para preencher o vetor:\n");
	
	for(i=0;i<QUANT;i++)
	{
		scanf("%f",&vetor[i]);
	}
	
	TrocarElementos(vetor);
	
}
