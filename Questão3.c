#include <stdio.h>

int main()
{
	int n, i, primo, m, cont = 0;
	scanf("%d",&n);
	m = n;
	
	while (m != 1)
	{
		for (i = m; i != 1; i--) 
		{
			if (m % i == 0 && m % 1 == 0) {
				primo = m;
				cont = cont + 1;
			}
		}
		if (cont == 1) {
			printf("%d\n", primo);
		}

		cont = 0;
		m--;
	}

	return 0;
}
