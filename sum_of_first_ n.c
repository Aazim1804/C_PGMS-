#include <stdio.h>
int main()
{
	int k,g,f;
	printf("enter the number:");
	scanf("%d",&f);
	k=1;
	g=0;
	while(k<=f)
	{
		g+=k;
		k++;
	}
	printf("Sum=%d",g);
	return 0;

}
