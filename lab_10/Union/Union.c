#include <stdio.h>
union Data
{
    int i;
    float f;
    char ch;
};
int main()
{
    union Data d;
    d.i = 10;
    printf("Vedanshi Daima\n");
    printf("Integer: %d", d.i);
    return 0;
}
