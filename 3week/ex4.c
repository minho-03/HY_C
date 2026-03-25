#include <stdio.h>

int main()
{
    int i = 1, n, score, j = 0;
    printf("성적을 입력할 학생수(N): ");
    scanf("%d", &n);
    do
    {
        printf("%d번째 학생의 점수(0~100):", i);
        scanf("%d", &score);
        if (score > 100 || score < 0)
            break;
        i++;
        if (score >= 90)
            j++;
    } while (i <= n);
    printf("%d명 중 90점 이상의 점수를 획득한 학생의 수: %d \n", n, j);
    return 0;
}