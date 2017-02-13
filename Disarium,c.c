#include <stdio.h>
#include <math.h>
int no_of_digits(int n)
{
int p=0;
while(n!=0)
{
n=n/10;
p++;
}
return p;
}

int main()
{
    int t;
int n;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);

int digits= no_of_digits(n);
int result=0;
int temp=n;
int rem=0;
int i;
for(i=digits;i>0;i--)
{
    rem=temp%10;
    result=result+(int)(pow(rem,i));
    temp=temp/10;

}
if(result==n)
printf("1\n");
else
    printf("0\n");
}

return 0;
}
