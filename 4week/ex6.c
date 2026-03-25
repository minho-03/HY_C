#include <stdio.h>
int sum_n(int);
int main()
{
    int n;
    printf("N: ");
    scanf("%d", &n);
    printf("%d\n", sum_n(n));
    return 0;
}

int sum_n(int a)
{
    if (a <= 1)
        return 1;
    else
        return sum_n(a - 1) + a;
}