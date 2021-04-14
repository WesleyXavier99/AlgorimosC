/*Fazer uma função que calcule o MDC
(máximo divisor comum) entre dois números.*/
#include<stdio.h>

int main()
{
	int num1,num2;
	int CalcularMdc();
	
	printf("Digite um numero:\n");
	scanf("%d",&num1);
	
	printf("Digite um numero:\n");
	scanf("%d",&num2);
	
	CalcularMdc(num1,num2);
		
}

int CalcularMdc(int num1,int num2)
{
	int menor, i, mdc;
	
	if(num1<num2)
	{
		menor=num1;
	}else{
		menor=num2;
	}
	
	for(i=1;i<=menor;i++)
	{
		if((num1%i==0) && (num2%i==0))
		{
			mdc=i;
		}
	}
	
	printf("O MDC e : %d",mdc);
}






