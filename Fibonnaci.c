/*
Desenvolver uma fun��o que calcule o n-�simo termo da 
sequ�ncia de Fibonacci*/
//Fn = Fn - 1 + Fn - 2  //Larissa: Provavelmente vc est� comentendo um erro de interpreta��o aqui. Vou mandar a formula certa pra vc.
//1,1,2,3,5,8,13,21
#include<stdio.h>

int main()
{
	int num,i,anterior1,anterior2,fn=0;
	printf("Digite um numero\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(i<=2) //Larissa - Aqui � i<=2, n�o?
		{
			anterior1=0;
			anterior2=1;
		}else{
				anterior1=anterior2; //Larissa: Aqui, vc pode atribuir o anterior , no caso anterior2
				anterior2=fn; //Larissa: e aqui, s� fn pois fn ainda n foi atuzalizado, entao necessidade de vc voltar nenhum numero da sequencia
		}
		fn=anterior1+anterior2;
		printf("%d\n",fn);
	}
}
