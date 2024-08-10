#include<stdio.h>
int main()
{
    int i,t,j,n;
    printf("enter the limit of the array");
    scanf("%d",&n);
    printf("enter the elemnts in the array");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
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
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
