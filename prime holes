#include <stdio.h>

long long int eh_primo(long long int numero)
{
 	long long int rest1 = numero%2;
    long long int rest2 = numero%3;
    long long int buraco = 0;
    if (numero == 1)
    {
    	return 0;
    }
    else { 
    if (numero == 1 || numero == 2 || numero == 3)
       {
           return 1;
       }
    else if (rest1 != 0 && rest2 != 0) /*? primo */
       {
           return 1;
       }
    else if (rest1 == 0 || rest2 == 0)
       {
     	   return 0;
       }        
    }
}
void unidades (long long numero, long long int buraco, long long int total)
{
	long long int b = buraco;
	//printf("total %lld\n", total);
	long long int resto = numero%10;
	long long int div = numero/10;
	if (div == 0)
	{	//printf("%lld\n", resto);
		if (resto == 4 || resto == 6 || resto == 9 || resto == 0)
		{
			buraco = 1;
			total += buraco;
		}
		if (resto == 8)
		{
			buraco = 2;
			total += buraco;
		}
		/*printf("total %lld\n", total);
		printf("bb %lld\n", buraco);
		/*printf("buraco %lld\n", buraco);
		 printf("total %lld\n", total);*/
		 long long int primo = eh_primo(total);
		 //printf("primo %lld\n", primo);
		 if (primo == 1)
		 {
		 	printf("S\n");
		 }
		 else
		 {
		 	printf("N\n");
		 }
		//printf("%d\n", total);
		return;
	}
	else
	{
		//printf("%lld\n", resto);
		if (resto == 4 || resto == 6 || resto == 9 || resto == 0)
		{
			buraco = 1;
			total += buraco;
		}
		if (resto == 8)
		{
			 buraco = 2;
			total += buraco;
		}	 
		//printf("Buracos %lld\n", buraco);
	}
	unidades(div, buraco, total);

}

int main()
{
	long long int qtd;
	scanf("%lld", &qtd);

 	unidades(qtd, 0, 0);
	 return 0;
}
