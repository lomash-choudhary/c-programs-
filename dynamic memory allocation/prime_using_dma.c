#include<stdio.h>
#include<stdlib.h>
int *var();
void prime(int *);
int main(){
    int *k;
    k = var();
    if(k==NULL){
        printf("memory is not allocated");
        return 1;
    }
    else{
        prime(k);
        free(k);
    }
    return 0;
}
int *var(){
    int n;
    int *t;
    printf("enter the number you want to check");
    t = (int *)malloc(1*sizeof(int));
    scanf("%d",t);
    return(t);
}
void prime(int *k){
    int i,c=0;
    for(i=1;i<=*k;i++){
        if(*k%i==0){
            c++;
        }
    }
    if(c==2){
        printf("%d is prime",*k);
    }
    else{
        printf("%d is not prime",*k);
    }
}