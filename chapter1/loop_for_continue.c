#include<stdio.h>
int main(void){
    int n,sum=0;
    printf("请输入一个正整数n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%3==0){
            continue;
        }
        sum=sum+i;
    }
    printf("结果sum=%d\n",sum);
    return 0;
}