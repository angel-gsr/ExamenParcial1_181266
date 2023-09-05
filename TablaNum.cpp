#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_CTYPE, "");
	int n,i=0,j=10,res;
	
	printf("Escriba un número para desarrollar su Tabla de Multiplicar :) \n");
	scanf("%d",&n);
	
	/*for(i=0;i<=10;i++)
	{
		res=n*i;
		printf("%d X %d = %d \n",n,i,res);
	}*/
	
	while(i<=j)
	{
		res=n*i;
		printf("%d X %d = %d \n",n,i,res);
		i++;
	}
	return 0;
}
