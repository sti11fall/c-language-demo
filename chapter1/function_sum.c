#include<stdio.h>
int sum(int n){
    int i,s=0;
    for(i=1;i<=n;i++){
        s=s+i;
    }
    return s;
}
int main(){
    int num,res;
    printf("请输入数字n: ");
    scanf("%d",&num);
    res=sum(num);
    printf("1到%d的总和=%d\n",num,res);
    return 0;
}