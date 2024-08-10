#include<stdio.h>
#include<stdlib.h>
int *var();
void check(int *);
int main(){
    int *k;
    k = var();
    if(k==NULL){
        printf("memory is not allocated");
        return 1;
    }
    else{
        check(k);
    }
    return 0;
}
int *var(){
    int *t;
    int n;
    t = (int *)malloc(1*sizeof(int));
    printf("enter the number you want to check");
    scanf("%d",t);
    return(t);
}
void check(int *k){
    if(*k%2==0){
        printf("%d is even",*k);
    }
    else{
        printf("%d is odd",*k);
    }
}