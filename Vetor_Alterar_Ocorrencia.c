/*QUEST�O 06: Fa�a uma fun��o que, dado um vetor de reais,
altere todas as ocorr�ncias do n�mero A pelo n�mero B.*/
#include<stdio.h>
#define QUANT 10

float Alterar(float a, float b, float vetor[])
{
	int i;
	for(i=0;i<QUANT;i++)
	{
		if(vetor[i]==a)
		{
			vetor[i]=b;
		}
	}
	
	for(i=0;i<QUANT;i++)
	{
		printf("%f\n", vetor[i]);
	}
	
}

int main()
{
	int i;
	float a,b,vetor[QUANT];
	printf("Digite o A:\n");
	scanf("%f",&a);
	
	printf("Digite o B:\n");
	scanf("%f",&b);
	
	printf("Digite 10 valores para preencher o vetor\n");
	for(i=0;i<QUANT;i++)
	{
		scanf("%f",&vetor[i]);
	}
	
	Alterar(a,b,vetor);
}

