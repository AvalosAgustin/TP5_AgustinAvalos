#include <stdio.h>
#include <stdlib.h>

int suma(int acu, int acu2 )
{
	int sum;
	sum=acu+acu2;
	return sum;
	
	
	
}
int main() 
{
	int num[200];
	int numero,i=1,cont1=0,cont2=0,cont3=0,numero2,compa=0,acu=0,acu2=0,Total;
	
	
	printf("Ingrese el numero%d\n",i);
	scanf("%d",&numero);
	
	acu=numero;
	i++;
	printf("Ingrese el numero %d\n",i);
	scanf("%d",&numero2);
	i++;
	while(numero2 >0)
	{
		
		
		printf("Ingrese el numero %d\n",i);
		scanf("%d",&numero2);
		
		num[i]=numero2;
		compa=num[i];
		
		
		if(numero<num[i])
		{
			
			numero=num[i];
			cont1=cont1+1;
			
		}
		else
		{
			if(numero>num[i])
			{
				cont2=cont2+1;
				
				
			}
			else
			{
				cont3=cont3+1;
			}
		}
		numero=num[i];
		
		
		if(compa>0)
		{
			acu2=numero2;
		}
		
		i++;
		
	}
	
	
	
	if(cont1>cont2 && cont1>cont3)
	{
		printf("Los numeros fueron ingresados de forma ascendente\n");
		
	}
	else
	{
		if(cont2>cont1 && cont2>cont3)
		{
			printf("Los numero fueron ingresados de forma descendente\n");
		}
		else
		{
			printf("Los numeros fueron ingresados de forma desordenada\n");
			
		}
		
	}
	Total=suma( acu, acu2 );
	printf("La suma de el primer(%d) numero y el ultimo(%d)  es:%d\n",acu,acu2,Total);
	
	
	
	return 0;
	system("pause");
}
