#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
 * A função 'fifth' utiliza o algoritmo de Euclides para encontrar o mdc entre dois inteiros.
 * A funçao inicialmente recebe os dois inteiros como parâmetro.
 * 1 - Salva o valor de 'b' em uma váriavel temporária.
 * 2 - Deixa 'b' sendo igual ao resto da divisão de 'a' por 'b'.
 * 3 - Deixa o 'a' sendo igual ao valor de 'b', que está na variável temporária.
 * 4 - Enquanto o 'b'(resto da divisão de 'a' por 'b') não for zero ele repete.
 * 5 - Quando 'b' for igual a zero o mdc estará na váriavel 'a'.
 */
long long int fifth(long long int a, long long int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() 
{
    long long int mdc, a, b;
    scanf("%lld %lld", &a, &b);
    mdc = fifth(a, b);
    printf("%lld", mdc);
	return 0;
}