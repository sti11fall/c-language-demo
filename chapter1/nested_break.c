#include<stdio.h>
int main(void){
    int i;
    int j;
    for(i=1;i<=9;i++){
        for(j=1;j<=i;j++){
            if(j==3){
                break;
            }
            printf("%d*%d=%d\t", j,i,i*j);
        }
        printf(" \n");
    }
    getchar();
    getchar();
    return 0;
}