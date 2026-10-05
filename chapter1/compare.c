#include<stdio.h>
int main(){
    int a,b;
    printf("输入两个整数，空格分开: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d更大\n",a);
    }else if(a<b){
        printf("%d更大\n",b);
    }else{
        printf("%d和%d相等\n",a,b);
    }
    return 0;
}