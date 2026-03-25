#include <stdio.h>

int main()
{
    int i, j;
    printf("윤년찾기를 위한 시작 년도와 마지막 년도를 차례로 입력하세요: \n");
    scanf("%d%d", &i, &j);
    while (i <= j)
    {
        if (i % 4 == 0 & i % 100 != 0 || i % 400 == 0)
        {
            printf("%d년도는 윤년입니다.\n", i);
        }
        i++;
    }
    return 0;
}