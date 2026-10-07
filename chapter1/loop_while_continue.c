#include<stdio.h>
int main(void){
    int n;
    int i=1;
    int sum=0;
    printf("请输入一个正整数n: ");
    scanf("%d",&n);
    while(i<=n){
        if(i%3==0){
            i++;
            continue;
        }
        sum=sum+i;
        i++;
    }
    printf("结果sum=%d\n",sum);
    return 0;
}