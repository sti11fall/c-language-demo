#include<stdio.h>
int main(void){
    int i=1;
    while(i<=10){
        i++;
        if(i==6){
            continue;
        }
        printf("i = %d\n",i);
    }
    printf("循环结束\n");
    getchar();
    getchar();
    return 0;
}