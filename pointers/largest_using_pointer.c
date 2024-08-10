#include<stdlib.h>
#include<stdio.h>
int greatest(int *,int);
int main()
{
    int n,i;
    int *p;
    printf("enter the limit of the loop");
    scanf("%d",&n);
    p = (int *) calloc(n,sizeof(int));
    if(p==NULL){
        printf("memory not allocated");
        exit(0);
    }
    printf("enter the elements in the array");
    for(i=0;i<n;i++){
      scanf("%d",(p+i));
    }
    printf("greatest number in the array is %d",greatest(p,n));
}
int greatest(int *p,int n){
    int m,i;
    m = *p;
    for(i=0;i<n;i++){
        if(*(p+i)>m){
            m = *(p+i);
        }
    }
    return m;
}