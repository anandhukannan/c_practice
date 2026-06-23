#include <stdio.h>
int main()
{
int a;
int i=1;
int fact=1;
printf("Enter a number:");
scanf("%d",&a);
while(i<=a)
{
    fact=fact*i;
    i++;
}
printf("%d",fact);
return 0;
}

