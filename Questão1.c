#include <stdio.h>



int main(){

	int num1,i,a;

	a=0; 

	printf("Igresse o número: \n");
	scanf("%d", &num1);

	for(i=1; i<=num1; i++)
	{
	if(num1%i==0) 
	a++;
	}
	if(a==2) 	
	{
	printf("O número é primo\n");
	}
	else
	{
	printf("O número não é primo\n");
	}	
	
	return 0;
}
