#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0;
	int n=0;
	int k=0;
	int a[50];
	scanf("%d%d",&n,&k);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
int comp=a[k-1];
	int counter=0;
	if(a[0]<=0)
	{
		printf("0");
	exit(0);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=comp&&a[i]>0)
			counter++;
	}
	
	printf("%d",counter);
	return 0;
}