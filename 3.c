#include <stdio.h>

int main()
{
int n,i;
scanf("%d",&n);
i=1;
do
{
    if(i%2!=0)
    printf("%d",i);
    i++;
} while(i<=n);
return 0;
}