#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_CTYPE, "");
	int n;

	printf("\t Detector de negativos pulse (0 pa salir)\n");
    printf("Ingrese un n�mero: ");
    scanf("%d",&n);

    while (n!=0) 
	{
        if (n<0) 
		{
            printf("El n�mero es negativo.\n");
        } 
		else 
		{
            printf("El n�mero es positivo o cero.\n");
        }

        printf("Ingrese otro n�mero (o 0 para salir): ");
        scanf("%d",&n);
    }

	return 0;
}
