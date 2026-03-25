#include <stdio.h>
int fac(int);
int main()
{
    int n;
    printf("N: ");
    scanf("%d", &n);
    printf("%d\n", fac(n));
    return 0;
}

int fac(int a)
{
    int i;
    if (a <= 1)
        return 1;
    else
        return fac(a - 1) * a;
}