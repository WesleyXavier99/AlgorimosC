/*QUESTÃO 11:Fazer um função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que consiste na intersecção
dos dois primeiros.*/
#include<stdio.h>
#define QUANT 10
void GerarVetor(int vetorA[],int vetorB[]);

int main()
{
	int vetorA[QUANT];
	int vetorB[QUANT];
	int i;
	
	printf("Digite 10 valores para o primeiro vetor: \n");
	for(i=0;i<QUANT;i++)
	{
		scanf("%d", &vetorA[i]);
	}
	
	printf("Digite 10 valores para o segundo vetor: \n");
	for(i=0;i<QUANT;i++)
	{
		scanf("%d", &vetorB[i]);
	}
	
	
	GerarVetor(vetorA,vetorB);
}

void GerarVetor(int vetorA[],int vetorB[])
{
	int i,j,cont=0;
	
	for(i=0;i<QUANT;i++)
	{
		for(j=0;j<QUANT;j++)
		{
			if(vetorA[i]==vetorB[j])
			{
				cont++;
			}
		}
	}
	
	int vetorC[cont];
	cont=0;
	for(i=0;i<QUANT;i++)
	{
		for(j=0;j<QUANT;j++)
		{
			if(vetorA[i]==vetorB[j])
			{
				vetorC[cont]=vetorB[j];
				cont++;
			}
		}
	}
	for(i=0;i<cont;i++)
	{
		printf("%d ",vetorC[i]);
	}
	
	
	
	
	
}
