#include <stdio.h>
void sum_n(int);
int main()
{
    int n=0;
    printf("N:");
    scanf("%d", &n);
    sum_n(n);
    return 0;
}

void sum_n(int a)
{
    int i, sum = 0;
    for (i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    printf("1~%d까지의 합:%d\n", a, sum);
}