/*QUESTÃO 08:
Dados um vetor de reais (cujos elementos estão ordenados crescentemente) e um número x, retornar a posição da primeira
ocorrência de x (caso encontre-se no vetor) ou a posição na qual deveria estar (caso contrário).*/
#include<stdio.h>
#define QUANT 10

float PosicaoDeOcorrencia(float vetor[], float num);

int main()
{
	float vetor[QUANT];
	float num;
	int i;
	
	printf("Digite um numero : \n");
	scanf("%f",&num);
	
	printf("Digite 10 valores para preencher o vetor em ordem crescente:\n");
	for(i=0;i<QUANT;i++)
	{
		scanf("%f", &vetor[i]);
	}
	PosicaoDeOcorrencia(vetor,num);
}

float PosicaoDeOcorrencia(float vetor[], float num)
{
	int i;
	for(i=0;i<QUANT;i++)
	{
		if(vetor[i]==num)
		{
			printf("A posicao e %d", i);
			return;
		}else{
			if((vetor[i-1]<num)&&(vetor[i+1]>num))
			{
				printf("A posicao na qual deveria estar e %d",i+1);
				return;
			}else{
				if(vetor[QUANT-1]<num)
				{
					vetor[QUANT-1]=num;
					return;
				}
			}
		}
	}
	
}
