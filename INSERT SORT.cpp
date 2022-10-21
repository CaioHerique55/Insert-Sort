#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int numeros [10] = { 10,4,14,20,12,6,22,18,16,2};
	int aux;
	
	for(int i=0; i<10; i++)
{
	printf(" | %.2i", numeros[i]);
}
	
	
	for(int i=0; i<10; i++)
	{
		for(int j=i+1; j>0; j--)
		{
			if(numeros[j] < numeros [j-1])
			{
			  aux=numeros[j];
			  numeros[j] = numeros[j-1];
			  numeros[j-1] = aux;
			}
		}
	}

printf("\n\n");

for(int i=0; i<10; i++)
{
	printf(" | %.2i", numeros[i]);
}

return 0;

}

