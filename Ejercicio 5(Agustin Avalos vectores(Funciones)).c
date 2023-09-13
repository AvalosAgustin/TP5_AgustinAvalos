#include <stdio.h>
#include <stdlib.h>
int totalUnidad(int i, int j, int*unidades) 
{
	
	int auxiA=0,vendedor=0,t=0;
	for (i=1;i<=20;i++)
	{
		for(j=1;j<=15;j++)
		{
			printf("Ingresar la cantidad de unidades vendidas por el vendedor %d del dia%d\n",i,j);
			scanf("%d",&unidades[i]);
			t=t+unidades[i];
			
			if(auxiA<unidades[i])
			{
				auxiA=unidades[i];
				vendedor=i;
			}
			
		} 
	}
	printf("El vendedor %d tiene la mayor venta diaria y es de %d unidades\n",vendedor,auxiA);
	return t;
}


int main() 
{
	int unidades[20];
	int i=0,j=1,Total=0;
	Total=totalUnidad(i,j,unidades);
	printf("El total de unidades vendidas a lo largo de los 15 dias son:%d\n",Total);
	
	
	return 0;
}
