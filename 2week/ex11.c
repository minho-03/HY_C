#include <stdio.h>

int main()
{
    int score = 85;
    char grade = (score >= 90) ? 'A' : 'B';
    printf("%c\n", grade);
    return 0;
}