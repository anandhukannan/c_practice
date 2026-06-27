#include <stdio.h>
int main()
{
int a;
int count=0;
printf("Enter a number:");
scanf("%d",&a);
while(a>0)
{
    a=a/10;
    count++;
}
printf("The count is %d",count);

return 0;
}
