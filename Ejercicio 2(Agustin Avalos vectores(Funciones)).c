#include <stdio.h>
#include<stdlib.h>

float promedio(int i,int*num)
{
	int acu=0,cont=0,k=0,resul=0;;
	
	
	for(i=1;i<=5;i++)
	{
		
		printf("Ingrese un numero\n");
		scanf("%d",&num[i]);
		
		acu=acu+num[i];
		cont=cont+1;
		
		if(k<num[i])
		{
			k=num[i];
		}
		
	}
	printf("El numero mayor es:%d\n",k);
	resul=acu/cont;
	
	return resul;
	
}

int main(int argc, char *argv[]) 
{
	int num[5];
	int i=0;
	float prom;
	
	 prom=promedio(i,num);
	 
	printf("El  promedio de los numeros ingresados es:%.2f\n",prom);
	
	
}
