#include <stdio.h>
int main()
{
	int i,j,n;
	printf("enter n:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=3)
		{
			printf("%d%d\t",i,j);
			j++;
		}
		i++;
		printf("\n");
	}
}
