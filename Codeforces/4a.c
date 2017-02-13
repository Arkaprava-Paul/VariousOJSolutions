#include <stdio.h>
int main()
{
    int rem;
    int w;
    scanf("%d",&w);
	rem=w%2;
   if(w==2||w==0)
	   printf("NO");
   if(rem==1)
	   printf("NO");
   if(rem==0&&w!=2&&w!=0)
	   printf("YES");
   
    return 0;
}
