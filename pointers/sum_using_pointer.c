#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,sum=0;
    int *p;
    printf("enter the limit");
    scanf("%d",&n);
    p = (int *)calloc(n,sizeof(int));
    printf("enter the elements in the araay");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++){
        sum += *(p+i);
    }
    printf("sum of the array elements is =%d",sum);
}