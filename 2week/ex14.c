#include <stdio.h>

int main()
{
    int a = 5, b = 10, c = 15;
    printf("%d\n", (a < b) && (b < c));
    printf("%d\n", (a > b) || (b < c));
    return 0;
}