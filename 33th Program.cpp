#include<stdio.h>
int main()
{
	int n = 47;
	
	int i = 1;
	
	for(;;)
	{
		printf("%d * %d = %d\n", n, i, n*i);
		
		i=i+1;
		
		if(i>50){
			break;
		}
	}
	return 0;
}
