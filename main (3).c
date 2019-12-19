/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a;
printf("enter the day  a");
scanf("%d",&a);
switch(a)
{
    case 1:printf("sunday");
    break;
    case 2:printf("monday");
    break;
    case 3:printf("tuesday");
    break;
    case 4:printf("wednesday");
    break;
    case 5:printf("thursday");
    break;
    case 6:printf("friday");
    break;
    case 7:printf("saturday");
    break;
}
if(a)
{
    printf("it is%c",a);
}
return 0;
}



