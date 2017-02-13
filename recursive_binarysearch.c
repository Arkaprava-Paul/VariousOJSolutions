#include <stdio.h>
#include <stdlib.h>

int binary_search(int a[],int key,int low,int high)
{
int mid=(low+high)/2;

if(low>high)
{
printf("Element not found \n");
exit(0);
}
if(key==a[mid])
{
printf("Element found at %d position\n",mid+1);

}


if(key>a[mid])
binary_search(a,key,mid+1,high);
if(key<a[mid])
binary_search(a,key,low,mid-1);
}

int main()
{int key=0;
int beg=0;

	int a[50];
	int n=0;
	int i=0;

printf("Enter number of elements in array");
scanf("%d",&n);
int end=n-1;

printf("Enter the element to be searched");
scanf("%d",&key);
printf("\n");

printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
binary_search(a,key,beg,end);



	
return 0;
}