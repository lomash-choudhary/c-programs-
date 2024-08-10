#include<stdio.h>
#include<stdlib.h>
int *var();
void fact(int *,int);
int main(){
    int n;
    int *k;
    printf("enter the number whose factorial you want to print");
    scanf("%d",&n);
    k = var();
    if(k==NULL){
        printf("memory is not allocated");
        return 1;
    }
    else{
        fact(k,n);
        free(k);
    }
    return 0;
}
int *var(){
    int *t;
    t = (int *)malloc(1*sizeof(int));
    return(t);
}
void fact(int *k,int n){
    int i;
    *k=1;
    for(i=1;i<=n;i++){
        *k = (*k)*i;
    }
    printf("factroial is = %d",*k);
}