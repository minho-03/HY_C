#include <stdio.h>
int main()
{
    float height[6] = {0};
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("height[%d]=%f\n", i, height[i]);
    }
    return 0;
}