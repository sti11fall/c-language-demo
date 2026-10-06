#include<stdio.h>
int main(void){
    int target=6;
    int guess;
    printf("猜数字游戏1~10\n");
    do{
        printf("请输入你猜的数字: ");
        scanf("%d",&guess);
        if(guess>target){
            printf("大了，再试试\n");
        }
        else if(guess<target){
            printf("小了，再试试\n");
        }
    }while(guess!=target);
    printf("恭喜， 猜对数字6啦! \n");
    getchar();
    getchar();
    return 0;
}
