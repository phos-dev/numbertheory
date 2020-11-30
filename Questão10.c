#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
/*
    O algoritmo utiliza o teorema chinês do resto,
    1 -  É recebido o 'n'(congruências lineares para o sistema)
    2 - A congruência 'x ≡ 2 mod 3' é recebida como '2 3', os valores são guardados no array 'a' e 'md', respectivamente.
    3 - Enquanto as congruências são recebidas, o produto dos modulos, vai sendo guardado na variavél 'm'.
    4 - No array 's' ficará as soluções de 'm/m1 ≡ 1 mod md' para cada uma das congruências
    5 - No array 'ms' ficará o valor de 'm/m1' para a congruência 'i'.
    6 - Utilizamos a função inverso para encontrar a solução de 'm/m1 ≡ 1 mod md'
    7 - São somadas o produto de 'm/m1 * a1 * s1 + m/m2 * a2 * s2 ...' e guardadas na variável 'k'
    8 - No final o 'x' é 'k mod m' 
    
    Formato do input:
    n
    a1 b1
    a2 b2
    ...
    an bn
*/
ll int inverso(ll int a, ll int m)
{
    ll int b;
    for (b = 0; b < m; b++){
        if ((a * b) % m == 1) break;
    }
    return b;
}
int main() 
{
    ll int n;
    scanf("%lld", &n);
    
    ll int a[n], md[n], s[n], ms[n], m = 1, k = 0, i;

    for(i = 0; i < n; i++)
    {
        scanf("%lld %lld", &a[i], &md[i]);
        m *= md[i];
        s[i] = 0;
    }
    
    for(i = 0; i < n; i++)
    {
        ms[i] = m/md[i];
    }
    
    for(i = 0; i < n; i++)
    {
        s[i] = inverso(ms[i], md[i]);
    }
    for(i = 0; i < n; i++)
    {
        k += ms[i]*a[i]*s[i];
    }
    printf("x = %lld", k % m);
	return 0;
}