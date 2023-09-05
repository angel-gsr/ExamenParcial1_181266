#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_CTYPE, "");
	int n,min=0,top=10;
	
	printf("Escriba un número para imprimir sus siguientes 10 numeros :) \n");
	scanf("%d",&n);
	
	while(min<=top)
	{
		printf("%d \n",n++);
		min++;
	}
	return 0;
}
