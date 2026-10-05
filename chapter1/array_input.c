#include<stdio.h>
int main(){
    int arr[5];
    int i;
    printf("1 3 5 7 9");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }printf("1 3 5 7 9");
    for(i=0;i<5;i++){
        printf("%d",arr[i]);
    }return 0;
}