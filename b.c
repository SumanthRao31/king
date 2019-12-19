#include <stdio.h>

int main()
{
int n,i,fac=1;
scanf("%d",&n);
i=1;
while(i<=n)
{
    fac=fac*i;
    i++;
}
printf("%d\t",fac);
return 0;

}
