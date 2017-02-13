#include <stdio.h>
int main()
{
    //int a,b,c,d;
int c1,c2,c3,c4,n,i,count,arr[100000];
c1=0;c2=0;c3=0;c4=0;count=0;n=0;
scanf("%d",&n);

for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);

}

for(i=0;i<n;i++)
{
	if(arr[i]==1)
		c1++;
	if(arr[i]==2)
	c2++;
if(arr[i]==3)
	c3++;
if(arr[i]==4)
	c4++;
}

count=count+c4;
c4=0;
count=count+c2/2;
c2=c2%2;
if(c1>=c3)
{
    count=count+c3;
    c1=c1-c3;
    c3=0;
    count=count+c1/4;
    c1=c1%4;


if(c1+2*c2<=4&&c1+2*c2>0)
{

    count++;
c1=0;
c2=0;
}
else if(c1==3&&c2==1)
{
    count=count+2;

}
}
if(c1<c3)
{
    count=count+c1;
    c3=c3-c1;
    c1=0;
    count+=c3+c2;
}
printf("%d",count);

;return 0;
}
