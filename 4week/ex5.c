#include<stdio.h>
void leafYear(int);
int main(){
    int year;
    printf("year: ");
    scanf("%d",&year);
    leafYear(year);
    return 0;
}
void leafYear(int year){
    if(year%4==0 && year%100!=0 || year%400==0)
    printf("윤년\n");
    else
    printf("평년\n");
}