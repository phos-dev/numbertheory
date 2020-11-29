#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// PROGRAMA PRA CALCULAR O INVERSO MODULAR :D
int main() {
    int a, m, b;
    scanf("%d%d", &a, &m);
    for (int i = 0; i < m; i++){
        if ((a * i) % m == 1){b = i; break;}
    }
    printf("%d", b);
  	return 0;
}
