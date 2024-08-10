#include<stdio.h>
#define max 50
int main(){
    int k,t=0,i,n;
    int a[max];
    printf("enter the limit of the array");
    scanf("%d",&n);
    printf("enter the elements in the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(k==a[i]){
            t=1;
            break;
        }
    }
    if(t==1){
        printf("element %d found at %d ",k,i+1);
    }
    else{
        printf("element not found");
    }
}