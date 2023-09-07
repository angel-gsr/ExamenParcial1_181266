#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_CTYPE, "");
	int r,n,min=0,imp;
	
	printf("Escriba un número máximo para descubrir los impares que hay antes de este :) \n");
	scanf("%d",&n);
	
	printf("Impares: \n");
	
	while(min<=n)
	{
	
		if (min%2!=0)
		{
			printf("%d \n",min);
		}
		
		min++;
	}
	/*printf("Pares: \n");
	
	while(min<=n)
	{
	
		if (min%2==0)
		{
			printf("%d \n",min);
		}
		
		min++;
	}*/
	return 0;
}


// test printf("%d \n",min);
		/*
		if ((min/1) && (min/min))
		{
			printf("Impar: %d \n",min);
		}
		else if(min/2)
		{
			printf("Par: %d \n",min);
		}
		
		*/
		//par=(2*min)/1;
		//imp=();
		//r=min;
		//printf("%d \n",(2*r)-1);
		
