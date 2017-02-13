#include <stdio.h>

int jumping(int n)
{
int count=1;


jump:

if(n!=1)
{
(n%2==1)? (n=3*n+1):(n=n/2);
count++;
goto  jump;
}

return count;
}

int main()
{
	int max=0;
	int i;
	int j;
	int p;
	int x;
scanf("%d",&i);
scanf("%d",&j);

for(p=i;p<=j;p++)
{
x=jumping(p);
if(x>max)
	max=x;

}
printf("%d %d %d ",i,j,max);

return 0;
}
