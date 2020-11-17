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
int main() 
{
    int b;
    while(scanf("%d", &b) && b != -1) printf("%d\n", first(b));
	return 0;
}