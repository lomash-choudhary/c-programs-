#include<stdio.h>
#include<stdlib.h>
typedef struct xyz{
    int a;
    int b;
    int c;
}hello;
int main(){
    hello *y;
    int k;
    y =(hello *)malloc(sizeof(hello));
    printf("enter the three numbers");
    scanf("%d%d%d",&y->a,&y->b,&y->c);
    k = y->a+y->b+y->c;
    printf("sum is %d",k);
    free(y);
}
