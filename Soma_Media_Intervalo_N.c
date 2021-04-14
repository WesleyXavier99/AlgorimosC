/*Implementar uma função que, dado um número inteiro, calcule (e retorne) a soma e a média de seus divisores. */
#include<stdio.h>

float SomaMedia(int num, int *soma, float *media)
{
	int i, contdiv=0;
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			(*soma)+=i;
			contdiv++;
		}
	}
	
	(*media)=(*soma)/contdiv;
	//printf("soma= %d \ncontagem de divisores= %d \nmedia= %.2f", soma,contdiv, media);
}

int main()
{
	int i, num, soma=0, contdiv=0;
	float media;
	
	printf("Digite um numero:\n");
	scanf("%d", &num);
	
	SomaMedia(num, &soma,&media);
	
	printf("A soma e : %d \nA media e : %f",soma,media);
}
