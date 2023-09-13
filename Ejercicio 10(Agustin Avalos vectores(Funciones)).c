#include <stdio.h>
int suma(int i, int*numero)
{
	int sum=0;
	for(i=0; i<10;i++)
	{
		
		sum=sum+numero[i];
	}
	return sum;
	
}

float promedio(int i, int*numero)
{
	float promedio=0,sum=0;
	for(i=0; i<10;i++)
	{
		
		sum=sum+numero[i];
	}
	
	promedio=sum/10;
	return promedio;
	
}
	
	int mayor_alpromedio(int*numero,float prom)
	{
		int i;
		int cont1=0;
		for (i=0;i<10;i++)
		{
			
			if (numero[i]>prom)
			{
				cont1=cont1+1;
			}
			
			
		}
		
		return cont1;
	}
	
	
	int menor_alpromedio(int*numero,float prom)
	{
		int i;
		
		int cont2=0;
		for (i=0;i<10;i++)
		{
			
			if (numero[i]<prom){
				cont2=cont2+1;
			}
			
		}
		return cont2;
	}
	
	
int main() 
{
	int numero[10];
	int sum=0,i,contador1=0,contador2=0,j=1;
	
	float produc=1,prom=0;
	for(i=0; i<10;i++)
	{
		printf("Ingrese un numero %d\n",j);
		scanf("%d",&numero[i]);
		sum=suma(i,numero);
		
		produc=produc*numero[i];
		j++;
	}
	
	prom=promedio(i,numero);
	
	contador2=menor_alpromedio( numero,prom);
	contador1=mayor_alpromedio(numero,prom);
	
	
	printf("\n La suma de los productos es: %d",sum);
	printf("\n El producto de todos los elementos es: %f",produc);
	printf("\n El promedio de los productos es: %f",prom);
	printf("\n La cantidad de elementos que son mayor del promedio: %d",contador1);
	printf("\n La cantidad de elementos que son menor al promedio: %d",contador2);
	
	return 0;
}

