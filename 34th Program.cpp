#include<stdio.h>
int main()
{
	int m, n=121;
	int i;
	
	m=0;
	
	for(i=1; i<=20; i++){
		m = m+n;
		printf("%d * %d = %d\n", n, i, n*i);
	}
	return 0;
}

