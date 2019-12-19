/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a;
printf("enter the numbers a");
scanf("%d",&a);
if(a%5==0&&a%11==0)
printf("it is divisible");
else
printf("not divisible");
return 0;
}
