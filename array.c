#include <stdio.h>

void ler(int i, int n,  int vetor[])
{
	if (i < n)
	{
		scanf("%d", &vetor[i]);
		ler(i+1, n, vetor);
	}

}

void imprimir (int i, int vetor[])
{
	if (i > 0)
	{
		printf("%d ", vetor[i]);
		imprimir(i-1, vetor);
	}
	else
	{
		printf("%d\n", vetor[i]);
	}

}

void deslocamento (int i, int array[], int n)
{
	if (i < n - 1)
	{
		int aux = array[i];
		array[i] = array[i+1];
		array[i+1] = aux;
		deslocamento(i+1, array, n);
	}

}

void printar_deslocamento (int i, int array[], int n)
{
	if (i < n)
	{
		printf("%d ", array[i]);
		printar_deslocamento(i + 1, array, n);
	}
	else
	{
		printf("\n");
		return;
	}
}

void boubble(int i, int n, int array[])
{
	
    if (i < n)
    {
        if (array[i] > array[i + 1])
        {
            int aux = array[i];
            array[i] = array[i + 1];
            array[i + 1] = aux;
        }
        boubble(i + 1, n, array);
    }
}

void imprimir_decres(int i, int n, int array[])
{
	if (n < i)
	{
		return;
	}
	else
	{
		printf("%d ", array[n]);
		imprimir_decres(i, n-1, array);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int vetor[n];
	
	ler(0, n, vetor);
	imprimir(n-1, vetor);

	deslocamento(0, vetor, n);
	printar_deslocamento(0, vetor, n);

	boubble(0, n, vetor);
	imprimir_decres(0, n-1, vetor);
	return 0;
}
