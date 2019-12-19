/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("a is greater%d",a);
    else if(b>a&&b>c)
    printf("b is greater%d",b);
    else
    printf("c is greater%d",c);
    return 0;
}