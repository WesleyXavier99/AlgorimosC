/*
Desenvolver uma função que calcule o n-ésimo termo da 
sequência de Fibonacci*/
//Fn = Fn - 1 + Fn - 2  //Larissa: Provavelmente vc está comentendo um erro de interpretação aqui. Vou mandar a formula certa pra vc.
//1,1,2,3,5,8,13,21
#include<stdio.h>

int main()
{
	int num,i,anterior1,anterior2,fn=0;
	printf("Digite um numero\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(i<=2) //Larissa - Aqui é i<=2, não?
		{
			anterior1=0;
			anterior2=1;
		}else{
				anterior1=anterior2; //Larissa: Aqui, vc pode atribuir o anterior , no caso anterior2
				anterior2=fn; //Larissa: e aqui, só fn pois fn ainda n foi atuzalizado, entao necessidade de vc voltar nenhum numero da sequencia
		}
		fn=anterior1+anterior2;
		printf("%d\n",fn);
	}
}
