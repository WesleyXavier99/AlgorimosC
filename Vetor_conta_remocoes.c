/*QUESTÃO 07: Desenvolver uma função que remova determinado elemento
(todas as suas ocorrências) de um vetor de float. Ao final,
retornar o número de remoções realizadas.*/
#include<stdio.h>
#define QUANT 10

float Remover(float vetor[],float num,int *quant)
{
	int i,j, cont=0;
	
	for(i=0;i<QUANT;i++)
	{
		if(vetor[i]==num)
		{
			for(j=i;j<QUANT;j++)
			{
				vetor[j]=vetor[j+1];
			}
			cont++;
			(*quant)--;
			i--;
		}
		
	}
	printf("\n");
	printf("O numero foi removido %d vezes\n", cont);
	return cont;
}

int main(){
	
	int i;
	float vetor[QUANT]={0};
	float num;
	int quant=QUANT;
	float Remover(float vetor[],float num,int *quant);	
	printf("Digite 10 valores para preencher o vetor: \n");
	for(i=0;i<QUANT;i++)
	{
		scanf("%f",&vetor[i]);
	}
	
	printf("Digite o numero a ser removido : \n");
	scanf("%f",&num);
	
	Remover(vetor,num,&quant);
	for(i=0;i<quant;i++)
	{
		printf("%f ", vetor[i]);
	}
}


