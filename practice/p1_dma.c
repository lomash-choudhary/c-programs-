#include<stdio.h>
#include<stdlib.h>
void greatest(int k[],int );
int *create(int );
void data(int k[],int );
int main(){
    int *k;
    int n,i;
    printf("enter the amount of number you want to enter");
    scanf("%d",&n);
    k=create(n);
    if(k==NULL){
        printf("memory is not allcated");
        exit(0);
    }
    data(k,n);
    greatest(k,n);
    free(k);
    return 0;
}
int *create(int n){
    int *t;
    t=(int *)malloc(n*sizeof(int));
    return(t);
}
void data(int k[],int n){
    int i;
    printf("enter the numbers");
    for(i=0;i<n;i++){
        scanf("%d",&k[i]);
    }
}
void greatest(int k[],int n)
{
    int m,i;
    m=k[0];
    for(i=0;i<n;i++){
        if(k[i]>m){
            m=k[i];
        }
    }
    printf("greatest number is %d",m);
}