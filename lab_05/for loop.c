#include <stdio.h>
int main()
{
    int n, Sum = 0;
    printf("Enter a range from 0 to n:");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        Sum =Sum + i;
        printf("Sum of first %d natural numbers = %d\n", i, Sum);
    }
    printf("Sum of natural numbers = %d", Sum);
    return 0;
}
