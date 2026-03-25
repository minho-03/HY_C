#include <stdio.h>
void hap_print(int i,int j);
int main(){
    int i,j;
    printf("더하기 연산을 할 두 개의 정수를 차례대로 입력하세요: \n");
    scanf("%d%d",&i,&j);
    hap_print(i,j);

    return 0;
}
void hap_print(int i,int j){
    printf("두수의 합: %d \n",i+j);
}