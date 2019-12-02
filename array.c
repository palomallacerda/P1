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

void deslocamento (int i, int array, int n)
{
	if (i < n)
	{
		int aux = array[i];
		array[i] = array[n-1];
		array[n-1] = array[i];
	}
	deslocamento(i+1, array, n);
}

/*void printar_deslocamento (int i, int array, int n)
{
	if (i > 0)
	{
		printf("%d\n", array[i]);
		printar_deslocamento(i)
	}

}*/
int main()
{
	int n;
	scanf("%d", &n);

	int vetor[n];

	ler(0, n, vetorz);
	imprimir(n-1, vetor);


	deslocamento(0, array, n);

	return 0;
}
