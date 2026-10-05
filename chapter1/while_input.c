#include<stdio.h>
int main(){
    int num;
    printf("请输入数字，输入0结束程序\n");
    while(1){
        printf("请输入： ");
        scanf("%d",&num);
        if(num==0){
            printf("收到0,程序退出\n");
            break;
        }
        printf("你输入的数字: %d\n",num);
    }
    return 0;
}