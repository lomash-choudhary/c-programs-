#include<stdio.h>
#define max 50
int main()
{
    int i,j,t,n;
    int a[max];
    printf("enter the limit of the array");
    scanf("%d",&n);
    printf("enter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t = a[j];
                a[j]= a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
