#include <stdio.h>
#include <stdlib.h>

void print_array(int i, int array[], int k)
{
	if (i < k)
	{
		if (array[i] > 0)	
		{
			for (int j = 0; j < array[i]; ++j)
				printf("%d\n", i);
			
		}
		print_array(++i, array, k);
	}
}

void verificando(int i, int array[], int k, int *big)
{
	if (i < k)
	{
		if (array[i] > *big)
		{
			*big = array[i];
		}
		
		verificando(++i, array, k, big);
	}
}

int ler_array(int i, int array[], int *k)
{
	if (scanf("%d", &array[i]) != EOF)
	{
		*k += 1;
	  	ler_array(++i, array, k);
	}
	else return *k;
}

int main()
{
	int n = 500000, big = 0;
	int *array =  malloc(n*sizeof(int));
	
	int k = 0;
	
	ler_array(0, array, &k);

	verificando(0, array, k, &big);
	int j = big+1;
	int *aux = malloc(j*sizeof(int));
	
	for (int i = 0; i < j; ++i)
		aux[i] = 0;
	
	for (int i = 0; i < k; ++i)
		aux[array[i]] += 1;	

	print_array(0, aux, big+1);
	return 0;
}
