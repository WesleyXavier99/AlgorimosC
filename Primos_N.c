/*Desenvolver uma função que exiba todos os números primos
inferiores a determinado valor inteiro N.*/
#include<stdio.h>

int main()
{
	int num;
	
	int Primos();
	
	printf("Digite um numero :");
	scanf("%d",&num);
	
	Primos(num);
	
}

int Primos(int num)
{
	int i,j,cont=0;
	
	for(i=1;i<num;i++)
	{
		for(j=2;j<i && cont==0;j++)
		{
			if(i%j==0)
			{
				cont++;
			}
		}
		
		if(cont==0)
		{
			printf("%d ", i);
		}
		cont=0;
	}
}

