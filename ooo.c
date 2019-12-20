
#include <stdio.h>

int main()
{
int a=5,b=7,c=10,d;
d=a>b&&a>c?a:b>c?b:c;
printf("%d",d);
    return 0;
}