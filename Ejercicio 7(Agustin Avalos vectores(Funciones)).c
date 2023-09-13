#include <stdio.h>

int alumno_mayor_a_8(int i,int*nota,int*auxiA)
	
{
	int cont=0;
	int j=1,l=0;
	
	for(i=0;i<4;i++)
	{
		printf("Ingresar la nota del alumno %d \n",j);
		scanf("%d",&nota[i]);
		if(nota[i]>8)
		{
			auxiA[l]=j;
			l++;
			cont=cont+1;
			
		}
		j++;
	}
	



	return cont;
	
}

int main() 
{
	int nota[4];
	int auxiA[4];
  
	int i=0,contador,l;
	
	
	
	
	contador=alumno_mayor_a_8(i,nota, auxiA);
	
	
	for(l=0;l<contador;l++)
	{
	
		
		printf("Los alumno %d  su nota es mayor a 8\n",auxiA[l]);
		
	}
	

	return 0;
}
