#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int first(int a){
    if(a <= 1) return 0;
    if(a <= 3) return 1;
    if(a % 2 == 0 || a % 3 == 0) return 0;
    for(int i = 5; i*i <= a; i += 6)
    {
        if(a % i == 0 || a%(i+2) == 0) return 0;
    }
    return 1;
}
void create_sieve(long long int* sieve, long long int lim)
{
    memset(sieve, 1, sizeof(sieve));
    sieve[0] = sieve[1] = 0;
    for(long long  int i = 2; i <= lim; i++)
    {
        if(sieve[i]) sieve[i] = 1; 
        for(long long  int j = i*i; j <= lim; j += i)
        {
            if(sieve[j]) sieve[j] = 0;
        }
    }
}
void second(long long int lim)
{
    long long int sieve[lim + 1];
    create_sieve(sieve, lim);
    for(long long int i = 2; i <= lim; i++)
    {
        if(sieve[i])printf("%lld\n", i);
    }
}
void third(long long int n)
{
    long long int primes[n + 1], i;
    create_sieve(primes, n + 1);
    i = 2;
    while(n != 1)
    {
        if(primes[i])
        {
            if(n % i == 0)
            {
                printf("%lld", i);
                n /= i;
                if(n != 1) printf("*");
            }
            else i++;
        }
        else i++;
    }
}
int main() 
{
    third(324);
	return 0;
}
