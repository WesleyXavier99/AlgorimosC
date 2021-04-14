#include<stdio.h>
//Desenvolver uma função que exiba os múltiplos de N
//compreendidos no intervalo definido por A e B.*/

int main()
{
	int a,b,num;
	int Multiplos(int a,int b,int num);
	
	printf("Digite um numero :\n");
	scanf("%d",&num);
	
	printf("Digite um numero para iniciar o intervalo :\n");
	scanf("%d",&a);
	
	printf("Digite um numero para finalizar o intervalo :\n");
	scanf("%d",&b);
	
	Multiplos(a,b,num);
		
}

int Multiplos(int a,int b,int num)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(num%i==0)
		{
			printf("%d,",i);
		}
	}
	return 0;
}







