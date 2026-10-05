#include<stdio.h>
int main(){
    int arr[5];
    int i,max;
    printf("3 4 2 9 1");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for(i=1;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("数组里面最大的数字是: %d\n",max);
    return 0;
    
}