#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("The number is prime\n");
    else
        printf("The number is not prime\n");
    return 0;
}
