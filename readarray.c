#include<stdio.h>
#include<stdlib.h>

void ler(int i, int size, int idade[])
{
  if (i < size)
  {
     scanf("%d", &idade[i]);
     ler(i+1, size, idade);
  }
  
}

void imprimir(int i, int n, int idade[])
{
  if (i < n-1)
  {
    printf("%d ", idade[i]);
    imprimir(i+1, n, idade);
  }
  else
  {
    printf("%d\n", idade[i]);
  }
  
  
}

int main()
{
  int n;
  int idade[n];

  scanf("%d",&n);

  ler(0, n, idade);
  
  imprimir(0, n, idade);
  return 0;
}
