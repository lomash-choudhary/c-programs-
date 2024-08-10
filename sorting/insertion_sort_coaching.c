#include<stdio.h>
#define m 50
int main(){
    int a[m];
    int n,t,j,i,k;
    printf("enter the limit of the array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("array before sorting\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0&&a[j]>t)
        {
            a[j+1]=a[j];
            j = j-1;
        }
        a[j+1]=t;
    }
    printf("array after sorting\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}