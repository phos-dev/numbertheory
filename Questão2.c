#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
 * A função 'create_sieve' é usada para criar o crivo de Eratóstenes(Algoritmo eficiente para encontrar primos até um certo limite)
 * 1 - Inicializa o array onde ficará os primos de 2 até lim com 1(É primo)
 * 2 - Iterar de 2 até raiz do lim, e setar 0 nos múltiplos de 'i' até o lim
 * 3 - No final, os que tiverem setados com 1 no array, são primos.
 */
void create_sieve(long long int* sieve, long long int lim)
{
    for(long long  int i = 2; i <= lim; i++) sieve[i] = 1;
    sieve[0] = sieve[1] = 0;
    for(long long  int i = 2; i*i <= lim; i++)
    {
        for(long long  int j = i*i; j <= lim; j += i)
        {
            if(sieve[j]) sieve[j] = 0;
        }
    }
}
/**
 * A função 'second' retorna os primos até um certo limite, passado como parâmetro.
 */
void second(long long int lim)
{
    long long int sieve[lim + 1];
    create_sieve(sieve, lim);
    for(long long int i = 2; i <= lim; i++)
    {
        if(sieve[i])printf("%lld\n", i);
    }
}
int main() 
{
    long long int a;
    scanf("%lld", &a);
    second(a);
	return 0;
}