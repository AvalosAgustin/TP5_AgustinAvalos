#include <stdio.h>
#include<stdio.h>


int Total_Resistencias(int i, int*R)
{
	int acu=0;
	for(i=0;i<5;i++)
	{  
		printf("Ingresar resistencia\n");
		scanf("%d",&R[i]);
		acu=acu+R[i];
	}
	
	return acu;
}

int main() 
{
	
	int i,suma;
	int R[5];
	suma= Total_Resistencias(i,R);
	
	printf("La resistencia 1 es:%d \n",R[0]);
	printf("La resistencia 2 es:%d\n",R[1]);
	printf("La resistencia 3 es:%d\n",R[2]);
	printf("La resistencia 4 es:%d\n",R[3]);
	printf("La resistencia 5 es:%d\n",R[4]);
	printf("La resistencia 5 es:%d\n",R[4]);

	printf("La suma de las resistencias es: %d\n",suma);
	
}

