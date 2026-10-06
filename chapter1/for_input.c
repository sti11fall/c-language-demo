#include<stdio.h>
int main(void){
    int i;
    int count=0;
    for(i=1;i<=100;i++){
        if(i%2==0){
            count=count+1;
        }
    }
    printf("1到100之间偶数一共有： %d 个\n", count);
    getchar();
    getchar();
    return 0;
}