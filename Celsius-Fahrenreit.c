/*Implementar uma função que converta determinada temperatura
em graus Celsius para graus Fahrenheit.*/
#include<stdio.h>
//(40 °C × 9/5) + 32 = 104 °F

int main()
{
	float temperatura;
	float fahrenheit(float temperatura);
	printf("Digite a temperatura em celsius\n");
	scanf("%f",&temperatura);
	
	fahrenheit(temperatura);
}

float fahrenheit(float temperatura)
{
	float convertida;
	convertida=(temperatura*(9/5))+32;
	printf("A temperatura em fahrenheit e : %.2f",convertida);
	return 0;
}



