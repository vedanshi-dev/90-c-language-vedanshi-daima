#include <stdio.h>
int main()
{
     int a=10,b=15;
     int c;
     printf("a=%d and b=%d",a,b);
     c=a;
     a=b;
     b=c;
     printf("\na=%d and b=%d",a,b);
     return 0;
}
