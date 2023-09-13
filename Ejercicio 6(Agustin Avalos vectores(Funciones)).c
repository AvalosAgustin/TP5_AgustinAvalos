#include <stdio.h>
#include <stdlib.h>

int  mayor_a_2000( int*sueldo,int i)  
{
	int j=1,cont1=0;
	for(i=0;i<20;i++) 
	{
		printf("Ingresar el sueldo de la persona%d\n",j);
		scanf("%d",&sueldo[i]);
		if(sueldo[i]>=2000)
		{
			cont1=cont1+1;
		}
		j++;
	}
	return cont1;
}

int  menor_a_2000( int*sueldo,int i) 
{
	int j=1,cont2=0;
	for(i=0;i<20;i++) 
	{
		if(sueldo[i]<2000)
		{
			cont2=cont2+1;
		}
		
		j++;
	}
	return cont2;
}

int main() 
{
	int sueldo[20];
	int i=0,cantidad1=0,cantidad2=0;
	
	cantidad1=mayor_a_2000(sueldo, i); 
	cantidad2=menor_a_2000(sueldo, i); 
	printf("La cantidad de personas que ganan mas de 2000$ son:%d\n",cantidad1);
	printf("La cantidad de personas que ganan menos de 2000$ son:%d\n",cantidad2);
	
	return 0;
}

