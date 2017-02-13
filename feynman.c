#include <stdio.h>

int main()
{
	int i=0;
	int result[200]; 
int k=0;
int p=999;
while(p!=0)
{
scanf("%d",&p);



result[i]=p*(p+1)*(2*p+1)/6;
i++;


}

for(k=0;k<=i;k++)
printf("%d\n",result[k]);

return 0;
}