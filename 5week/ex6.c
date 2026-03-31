#include<stdio.h>
int main(){
    int score2[3][2] = {{200,100},{180,90},{150,75}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("score[%d][%d]=%d \t",i,j,score2[i][j]);
        }
        printf("\n");
    }

    return 0;
}