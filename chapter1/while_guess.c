#include<stdio.h>
int main(void){
    int target=6;
    int guess;
    printf("来猜一个1~10的数字: \n");
    while(1){
        scanf("%d",&guess);
        if(guess>target){
            printf("大了，再试试\n");
        }
        else if(guess<target){
            printf("小了，再试试\n");
        }
        else{
            printf("猜对啦！\n");
            break;
        }
    }
    getchar();
    getchar();
    return 0;
}