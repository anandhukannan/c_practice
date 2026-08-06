#include <stdio.h>

int main() 
{
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    // Generate multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d * %d = %d\n", i, num, i * num);
    }

    return 0;
}
