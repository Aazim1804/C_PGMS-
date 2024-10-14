#include <stdio.h>
int main()
{
	int a,b;
	printf("ENTER Two NUMBERS:");
	scanf("%d%d",&a,&b);
	while(b>0)
	{
		a--;
		b--;
	}
	printf("THE DIFFERENCE = %d",a);
	return 0;
}
