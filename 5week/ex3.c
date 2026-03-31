#include <stdio.h>
int main(){
    float height[6]={0};
    int val,i;
    for (i = 0; i < 6; i++)
    {
        printf("height[%d]=",i);
        scanf("%f",&height[i]);
    }
    for(i=0;i<6;i++){
        printf("height[i]=%f\n",height[i]);
    }
    return 0;
}