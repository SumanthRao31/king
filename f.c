#include <stdio.h>

int main()
{
int i,n,r,rev=0;
scanf("%d",&n);
i=n;
for(i=n;i>0;i--)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
printf("%d",rev);
return 0;
}