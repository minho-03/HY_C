#include <stdio.h>
int createValue()
{
    int val;
    printf("값을 입력하세요: ");
    scanf("%d", &val);
    return val;
}
int main()
{
    int i, j, k;
    i = createValue();
    j = createValue();
    k = createValue();
    printf("i=%d j=%d k=%d\n", i, j, k);
    return 0;
}