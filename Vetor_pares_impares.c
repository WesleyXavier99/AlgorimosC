/*QUESTÃO 05: Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os em 2 vetores conforme forem pares ou ímpares.*/
#include<stdio.h>
#define QUANT 10

int main()
{
	int j;
	int vetor[QUANT]={0};
	
	for(j=0;j<QUANT;j++)
	{
		scanf("%d", &vetor[j]);
	}
	
	Distribuir(vetor);
}

int Distribuir(int vetor[])
{
	int i, j, k, l;
	int vetorpar[QUANT]={0};
	int vetorimpar[QUANT]={0};
	
	for(i=0,j=0,k=0;i<QUANT;i++)
	{
		if(vetor[i]%2==0)
		{
			vetorpar[j]=vetor[i];
			j++;
		}else{
			vetorimpar[k]=vetor[i];
			k++;
		}
	}
	for(l=0;l<QUANT;l++)
	{
		printf("%d ", vetorpar[l]);
	}
	printf("\n");
	for(l=0;l<QUANT;l++)
	{
		printf("%d ", vetorimpar[l]);
	}
	
}
