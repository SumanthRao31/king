#include <stdio.h>
#include<math.h>
int main()
{
int n,i,r,max=0;
scanf("%d",&n);
do{
    r=n%10;
    if(r>max)
    max++;
    n=n/10;
    
}
while(n!=0);
printf("max:%d",max);
return 0;
}
