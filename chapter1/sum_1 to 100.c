#include<stdio.h>
int main(){
    int i;
    int sum=0;
    for(i=1;i<=100;i++){
        sum=sum+i;
    }
    printf("1到100累加总和=%d\n",sum);
    return 0;
}