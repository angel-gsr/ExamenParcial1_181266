#include <iostream>
#include <stdio.h>

//Código del Arbol de Navidad

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
				//primero el arbol
				i = 0;
				while (i < j) 
				{
				    k = 0;
				    while (k < j - 1 - i) 
					{
				        printf(" ");
				        k++;
				    }
				
				    k = 0;
				    while (k < i * 2 + 1) 
					{
				        printf("*");
				        k++;
				    }
				
				    printf("\n");
				    i++;
				}
				//for (i = 0; i < j - 1; i++) 
				i=0;
			 	while(i<j-1)
				{
			    // espacios para centrarlo
			    //for (k = 0; k < j - 1; k++) 
			    	k=0;
			    	while(k<j-1)
					{
			            printf(" ");
			            k++;
			        }

			        // tallo
			        printf("| |\n");
			    	i++;
			 	}
				break;
				
			case 'b':
				printf("Escribe num de pisos para el arbol: \n");
				scanf("%d",&j);
				//primero el tallo
				//for (i = 0; i < j - 1; i++) 
				i=0;
				while(i<j-1)
				 {
			        // espacios para centrarlo
			        //for (k = 0; k < j - 1; k++) 
			        k=0;
			        while(k<j-1)
					{
			            printf(" ");
			            k++;
			        }

			        //tallo
			        printf("| |\n");
			        i++;
			    }
				//for (i=j-1;i>=0;i--) 
				i=j-1;
				while(i>=0)
				{
			        //for (k=0;k<j-i;k++) 
			        k=0;
			        while(k<j-i)
					{
			            printf(" ");
			            k++;
			        }
			        //for (k=0;k<2*i+1;k++) 
			        k=0;
			        while(k<2*i+1)
					{
			            printf("*");
			            k++;
			        }
			        printf("\n");
			        i--;
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
