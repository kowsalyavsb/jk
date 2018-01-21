#include <stdio.h>

int main(void) {
	int a,count=0;
	scanf("%d",&a);
	do
	{
		a= a/10;
		++count;
	}	while(a>=1);
	printf("count=%d",count); 
	return 0;
}
