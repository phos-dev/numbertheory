#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
Utilizando o crivo de erastotenes para criar um array com primos ate um n 
apos isso vai decompondo o 'a' e o 'b' e contando os divisores, caso seja 2
entao o tal primo dividiu o 'a' e o 'b' entao ? contabilizado no mdc, 
caso pelo menos 1 entre 'a' e 'b' foi dividido por esse primo ? contabilizado no mmc.
No final retorna o mdc ou mmc, dependendo do que o usu?rio botou no par?metro(isMDC) da funcao.
*/
void create_sieve(long long int* sieve, long long int lim)
{
    for(long long  int i = 2; i <= lim; i++) sieve[i] = 1;
    sieve[0] = sieve[1] = 0;
    for(long long  int i = 2; i <= lim; i++)
    {
        for(long long  int j = i*i; j <= lim; j += i)
        {
            if(sieve[j]) sieve[j] = 0;
        }
    }
}
long long int fourth(long long int k, long long int f, int isMDC)
{
    long long int a = k, b = f;
    long long int n = (k > f) ? (k + 1) : (f + 1);
    long long int primes[n + 1], i = 2;
    create_sieve(primes, n + 1);
    long long int mdc, mmc;
    mdc = mmc = 1;
    while(i <= n)
    {
        if(a == 1 && a == b) break;
        else
        {
            
            if(primes[i])
            {
                
                int d = 0;
                if(a % i == 0)
                {
                    a /= i;
                    d++;
                }
                if(b % i == 0)
                {
                    b /= i;
                    d++;
                }
                if(d && !isMDC) mmc *= i;
                if(d == 2 && isMDC) mdc *= i++;
                if(d == 0) i++;
            }
            else i++;
        }
    }
    return (isMDC) ? mdc : mmc;
}
int main() 
{
    int a, b, temp;
    scanf("%d %d", &a, &b);
    printf("MDC=%d", fourth(a, b, 1));
	return 0;
}