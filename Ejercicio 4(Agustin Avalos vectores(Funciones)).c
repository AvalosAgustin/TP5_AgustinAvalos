#include <stdio.h>
#include <stdlib.h>
int promedio_Alumnos(int i,int*nota,int j)
{
	int acu=0,cont=0;
	float promedio=0;
	
	for(i=1;i<=30;i++)
	{
		printf("Ingresar nota%d del alumno%d\n",i,j);
		scanf("%d",&nota[i]);
		if(nota[i]>10)
		{
			printf("La nota ingresada no es valida\n");
			while(nota[i]>10)
			{
				printf("Ingrese nuevamente la nota del 1 al 10\n");
				scanf("%d",&nota[i]);
				
				
			}
		}
		
		acu=acu+nota[i];
		cont=cont+1;
		j++;
	}
	promedio=acu/cont;
	
	return promedio;
	
	
}

int main() 
{
	int nota[30];
	int i=0,j=1;
	float prom;
	
	prom=promedio_Alumnos(i,nota,j);
	
	
	printf("El promedio de los alumnos es:%.2f",prom);
	return 0;
}
