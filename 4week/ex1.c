#include <stdio.h>
int hap(int i,int j);
int main()
{
    int i, j, sum;
    printf("더하기 연산을 할 두 개의 정수를 차례로 입력하세요 \n");
    scanf("%d%d", &i, &j);
    sum = hap(i, j);
    printf("두수의 합: %d \n", sum);
    return 0;
}

int hap(int i, int j)
{
    return i + j;
}