#include<stdio.h>
#define max 50
int main()
{
    int i,j,k,n,min,t,y,r,m=0,low=0,u;
    int a[max];
    printf("enter the limit of the array");
    scanf("%d",&n);
    u = n-1;
    printf("enter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        min = i;
        for(j=i+1;j<=n;j++)
        {
            if(a[j]<a[min])
            min = j;
        }
        t = a[i];
        a[i]=a[min];
        a[min]=t;
    }
    printf("enter the element to be searched");
    scanf("%d",&r);
    y = (low+u)/2;
    while(low<=u){
    if(r<a[y]){
        u = y-1;
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
