/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a,b,c;
printf("enter the angle  a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a+b+c==180)
printf("it is triangle");
else
printf("not a triangle");
return 0;
}



