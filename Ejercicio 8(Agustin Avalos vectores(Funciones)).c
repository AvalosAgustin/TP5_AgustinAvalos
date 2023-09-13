#include <stdio.h> 
#include <stdlib.h> 
int fibonacci(int i, int*resultado,int result,int numero) 
{
	int a=0,b=1,cont=1;
		printf("serie fibonacci es:%d\n",a);
	for(i=1;i<numero;i++) 
	{ 
		a=b; 
		
		b=result;
		
		result=a+b;
		
		resultado[i]=result;
		cont=cont+1;
		
	} 
	return cont;
}

int main() 
{
	int resultado[300],cantidad=0;
	
	int i=0,numero,result=0,l; 
	
	printf("Ingresar la cantidad numeros que desees generar\n"); 
	
	scanf("%d",&numero); 
	
	
	cantidad=fibonacci(i,resultado,result,numero);
	for(l=1;l<cantidad;l++) 
	{ 
		
		printf("serie fibonacci es:%d\n",resultado[l]); 
	} 
	
	return 0; 
	
	system("pause"); 
	
} 
