#include<stdio.h>

int main(){

    int n;
    for( int n=1; n <=10; n++){
    for(int i = 1;i <= 10;i ++){
    printf("%d x %d = %d\n", n, i, n * i);
    }printf("\n");   
    }
    return 0;
}