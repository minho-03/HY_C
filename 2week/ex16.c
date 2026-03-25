#include <stdio.h>

int main()
{
    int score = 72;
    char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B'
                                   : (score >= 70)   ? 'C'
                                                     : 'F';
    printf("%c\n", grade);
    return 0;
}