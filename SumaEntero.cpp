#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <cstdio>

int main()
{
	setlocale (LC_CTYPE, "");

    int n,suma;

    printf("Escriba un número: ");
    scanf("%d",&n);
    
    suma=n*(n+1)/2;

    printf("La suma de los primeros %d números naturales es: %d\n",n,suma);

    return 0;
}
//suma entero
