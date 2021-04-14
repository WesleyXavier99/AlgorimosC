/*QUESTÃO 03:Pede-se a implementação de uma função que, dado um vetor
contendo números reais, determine se o mesmo encontra-se ordenado de
forma crescente.*/
#include<stdio.h>
#define QUANT 5

float Ordem(float vetor[])
{
	int i,aux=0, cont=0;
	for(i=0;i<QUANT;i++)
	{
		
		if(vetor[i]>aux)
		{
			aux=vetor[i];
			cont++;
		}
	}
	if (cont==QUANT)
	{
		printf("e crescente");
	}else{
		printf("nao e crescente");
	}
}
int main()
{
	float vetor[QUANT];
	int i;
	printf("Digite os 5 valores para preencher o vetor:\n");
	
	for(i=0;i<QUANT;i++)
	{
		scanf("%f",&vetor[i]);
	}
	
	Ordem(vetor);
}
