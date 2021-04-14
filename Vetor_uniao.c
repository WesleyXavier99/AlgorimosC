/*QUEST�O 10: Fazer um fun��o que, dados dois vetores A e B
com n�meros inteiros, gerar o vetor C que consiste na uni�o dos
dois primeiros.
Nota: considerar que n�o existe repeti��o no
conjunto A, nem no conjunto B.*/
#include<stdio.h>
#define QUANT 10

int GerarVetor(int vetorA[],int vetorB[])
{
	int vetorC[QUANT+QUANT];
	int i,j;
	
	for(i=0;i<QUANT;i++)
	{
		vetorC[i]=vetorA[i];
	}
	for(i=QUANT,j=0;i<QUANT+QUANT;i++,j++)
	{
		vetorC[i]=vetorB[j];
	}
	for(i=0;i<(QUANT+QUANT);i++)
	{
		printf("%d ", vetorC[i]);
	}
}

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
