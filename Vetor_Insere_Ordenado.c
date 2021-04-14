/*QUESTÃO 09: Implementar a função de inserção de determinado elemento em um vetor ordenado
crescentemente (dica: utilizar a função do item 08 para auxiliar).*/
#include<stdio.h>
#define QUANT 10

void Insercao(int vetor[], int num);
void imprimir(int vetor[]);

int main()
{
	int vetor[QUANT];
	int i, num;
	
	printf("Digite um numero : \n");
	scanf("%d",&num);
	
	printf("Digite 10 valores para preencher o vetor em ordem crescente:\n");
	for(i=0;i<QUANT;i++)
	{
		scanf("%d", &vetor[i]);
	}
	
	Insercao(vetor,num);
	imprimir(vetor);
}

void Insercao(int vetor[], int num)
{
	int i,posicao;
	
	for(i=0;i<QUANT;i++)
	{
		if((vetor[i-1]<num)&&(vetor[i+1]>num))
		{
			posicao=i+1;
			for(i=QUANT-1;i>=posicao;i--)
			{
				if(i!=posicao)
				{
					vetor[i]=vetor[i-1];
				}else{
					vetor[i]=num;
					return;
				}
			}
		}
	}
	
	
}
void imprimir(int vetor[])
{
	int i;
	for(i=0;i<QUANT;i++)
	{
		printf("%d ",vetor[i]);
	}
}
