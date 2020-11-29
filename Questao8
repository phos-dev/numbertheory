#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// PROGRAMA PRA CALCULAR A SOLUÇÃO DA CONGRUENCIA DE AX ≡ B MOD M :D
int main() {
    printf("Dada uma congruência tipo ax ≡ b mod m, defina os valores de a, b e m:\n");
    int a, b, m, aa, x;
    scanf("%d%d%d", &a, &b, &m);
    aa = inversa_modular(a, m);
    x = (b * aa) % m;
    printf("x ≡ %d (mod %d)", x, m);
	return 0;
} 
int inversa_modular(int a, int m){
    for (int i = 0; i < m; i++){
        if ((a * i) % m == 1){return i;}
    }
    
}
