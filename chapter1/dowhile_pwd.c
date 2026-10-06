#include<stdio.h>
int main(void){
    int password;
    const int right_pwd=123456;
    do{
        printf("请输入密码； ");
        scanf("%d",&password);
        if(password != right_pwd){
            printf("密码错误，请重新输入!\n");
        }
    }while(password != right_pwd);
    printf("密码正确，成功登录!\n");
    getchar();
    getchar();
    return 0;
}