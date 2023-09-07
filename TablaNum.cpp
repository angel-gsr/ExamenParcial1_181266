#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_CTYPE, "");
	int n,j,res;
	
	printf("Escriba un número para desarrollar su Tabla de Multiplicar :) \n");
	scanf("%d",&n);
	
	printf("Hasta que número desea multiplicar?: \n");
	scanf("%d",&j);
	/*for(i=0;i<=10;i++)
	{
		res=n*i;
		printf("%d X %d = %d \n",n,i,res);
	}*/
	i=0
	while(i<=j)
	{
		res=n*i;
		printf("%d X %d = %d \n",n,i,res);
		i++;
	}
	return 0;
}
