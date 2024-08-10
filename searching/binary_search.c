#include<stdio.h>
#define max 50
int main(){
    int low=0,high,n,r,y,m=0,i;
    int a[max];
    printf("enter the limit of the array");
    scanf("%d",&n);
    high = n-1;
    printf("enter the elements in the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&r);
    while(low<=high){
    y = (low+high)/2;
    if(r<a[y]){
        high = y-1;
    }
    else if(r>a[y]){
        low = y+1;
    }
    else if(r==a[y]){
        printf("element %d found at %d",r,y+1);
        m = 1;
        break;
    }
    }
    if(m==1){
        printf("element found");
    }
    else{
        printf("element not found");
    }

}
