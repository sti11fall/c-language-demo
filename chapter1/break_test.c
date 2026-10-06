#include<stdio.h>
int main(void){
    int i;
    for(i=1;i<=10;i++){
        if(i==6){
            break;
        }
        printf("i= %d\n",i);
    }
    getchar();
    getchar();
    return 0;
}