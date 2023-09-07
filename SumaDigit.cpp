#include <stdio.h>
#include <locale.h>
#include <cstdio>
#include <iostream>

int main()
{
	setlocale (LC_CTYPE, "");

    int n,suma=0,nx,digit;

    printf("Ingresa un número: \n");
    scanf("%d", &n);

    nx=n; //lo mismo

    while (nx!=0) 
	{
    	digit=nx%10;
        suma+=digit;
        nx/=10;  
    }
    printf("La suma de los dígitos de %d es: %d\n",n,suma);

    return 0;
}

