/*QUESTÃO 01: Desenvolver uma função que determine o número de ocorrências de um número inteiro x em um vetor A. */
#include<stdio.h>
#define QUANT 4
int ocorrencias(int num, int vetor[])
{
	int cont=0, i;
	
	for(i=0;i<QUANT;i++)
	{
		if(vetor[i]==num)
		{
			cont++;
		}
	}
	return cont;
}

int main()
{
	
	int vetor[QUANT];
	int i, resultado, num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	printf("Digite as 4 posicoes do vetor\n");
	for(i=0;i<QUANT;i++)
	{
		scanf("%d", &vetor[i]);
	}
	
	resultado=ocorrencias(num,vetor);
	printf("O numero de ocorrencias e : %d", resultado);
	
}
