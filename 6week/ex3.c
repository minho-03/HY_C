#include <stdio.h>
int main(){
    int i;
    int *ip;
    printf("i의 주소 = %d\n",&i);
    printf("포인터 변수 ip의 값 = %d\n",ip);
    *ip=20;
    printf("i의 값 = %d\n",i);
    printf("포인터 변수 ip가 가리키는 값 = %d\n",*ip);
    return 0;
}