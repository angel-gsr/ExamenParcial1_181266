#include <iostream>
#include <stdio.h>

int main()
{
	int i,k,j,c;
	char a;
	
/*	printf("ola kieres hacerlo? 1)si y 2)no\n");
	scanf("%d",&c);
	c=1;
	while(c==1)
	{*/
		printf("Como desea imprimir su arbolito? \n\t a)De Pie \n\t b)Invertido \n");
		scanf("%c",&a);
		switch(a)
		{
			case 'a':
				printf("Escribe num de pisos para el arbol: \n");
				scanf("%d",&j);
				
				for(i=0;i<j;i++)
				{
					for(k=0;k<6-i;k++)
					{
						printf(" ");
					}
					for(k=0;k<i*2+1;k++)
					{
						printf("*");	
					}
					printf("\n");
				}
				break;
				
			case 'b':
				printf("Escribe num de pisos para el arbol: \n");
				scanf("%d",&j);
				
				for (i=j-1;i>=0;i--) {
			        for (k=0;k<j-i;k++) 
					{
			            printf(" ");
			        }
			        for (k=0;k<2*i+1;k++) 
					{
			            printf("*");
			        }
			        printf("\n");
			    }
			    break;
			default:
				printf("Escriba algo valido\n");
				break;
			
		}
		/*printf("Volver a hacer? 1)si y 2)no\n");
		scanf("%d",&c);
	}*/
}
