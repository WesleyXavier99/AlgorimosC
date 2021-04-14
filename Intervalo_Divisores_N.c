/* Implementar uma função que, dado um número inteiro n, e o intervalo definido pelos números a e b, determine quantos valores do intervalo
possuem divisores (sendo estes diferentes de 1) que também sejam divisores de n. 
 
Exemplo:  n = 6  a = 10 e b = 20 
 
Resposta = 7 (pois os números 10, 12, 14, 15, 16, 18 e 20 possuem divisores em comum com o número 6). */
#include<stdio.h>

int Valores(int n, int a, int b)
{
	int menor,cont=0, divisores=0, i, j;
	
			
	for(i=a;i<=b;i++)
	{
		
		if(i>n)
		{
			menor=n;
		}else{
			menor=i;
		}
		
		for(j=2;j<=menor && cont==0;j++)
		{
			
			if((i%j==0) && (n%j==0))
			{
				cont++;
			}
		}
		
		if(cont>0)
		{
			divisores+=1;
		}
		cont=0;
	}
	printf("%d valores",divisores);
	return 0;
	
}

int main ()
{
	int a, b, c, n;
	
	printf("Digite um numero:\n");
	scanf("%d",&n);
	
	printf("Digite um numero para iniciar o intervalo:\n");
	scanf("%d",&a);
	
	printf("Digite um numeropara finalizar:\n");
	scanf("%d",&b);
	
	Valores(n, a, b);
}
