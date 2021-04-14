/*Fazer uma função que calcule o MMC
(mínimo múltiplo comum) entre dois números.*/
#include<stdio.h>

int main()
{
	int num1,num2;
	int CalcularMmc ();
	
	printf("Digite um numero:\n");
	scanf("%d",&num1);
	
	printf("Digite um numero:\n");
	scanf("%d",&num2);
	
	CalcularMmc(num1,num2);
	
	
}

int CalcularMmc (int num1,int num2)
{
	int maior, mmc=0, i;
	
	if(num1>num2)
	{
		maior=num1;
	}else{
		maior=num2;
	}
	for(i=maior+1;mmc==0;i++)
	{
		if((i%num1==0) && (i%num2==0))
		{
			mmc=i;
		}
	}
	printf("O MMC e : %d",mmc);
}






