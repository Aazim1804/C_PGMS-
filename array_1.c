# include <stdio.h>
int main()
{
	int i,n,a[n];
    printf("enter n:");
    scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("Enter a [%d]",i);
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
}
