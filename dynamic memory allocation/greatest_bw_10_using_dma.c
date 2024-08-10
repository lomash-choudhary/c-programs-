#include<stdio.h>
#include<stdlib.h>
int main(){
    int *k;
    int g,n,i;
    printf("enter the limit ");
    scanf("%d",&n);
    k = (int *)malloc(n*sizeof(int));
    if(k==NULL){
        printf("memory is not allocated");
        return -1;
    }
    else{
    printf("enter the numbers to be checked");
    for(i=0;i<n;i++){
        scanf("%d",(k+i));
    }
    g = 0;
    for(i=0;i<n;i++){
        if(*(k+i)>g){
            g = *(k+i);
        }
    }
    }
    printf("greatest number is %d",g);
    free(k);
}