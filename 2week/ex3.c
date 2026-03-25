#include <stdio.h>

int main()
{
    char ch = 'A';
    int num = ch;
    printf("%d\n", num);
    printf("%c\n", (char)(num + 1));
    return 0;
}