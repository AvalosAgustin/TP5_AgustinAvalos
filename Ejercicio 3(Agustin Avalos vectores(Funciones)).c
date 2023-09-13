#include <stdio.h>
#include <stdlib.h>

void Intermedios(int num1,int num2,int*medio) 
{
	int i=0,a=0,b=0;
	
	if(num1>num2)
	{
		a=num1;
		b=num2;
	}
	else
	{
		a=num2;
		b=num1;
	}
	printf("Los numeros intermedios que estan entre %d y %d son:",num1,num2);

	for(i=b+1;i<a;i++)
	{
		medio[i]=i;
		printf("\n%d",medio[i]);
	}
}

int main() 
{
	int medio[100];
	int num1,num2;
	printf("Ingrese un numero\n");
	scanf("%d",&num1);
	printf("Ingrese otro numero\n");
	scanf("%d",&num2);
	
	Intermedios(num1,num2,medio);


	
	
	return 0;
}

