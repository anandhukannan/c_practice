#include <stdio.h>
int main()
{
int num;
int rem;
int largest=0;
printf("Enter the number:");
scanf("%d",&num);
if(num<0)
{
    num=-num;
}
while(num>0)
{
    rem=num%10;
    num=num/10;
    if(rem>largest)
    {
        largest=rem;
    }
}
printf("Largest digit = %d\n", largest);
return 0;

}
