#include<stdio.h>
#define max 50
int main()
{
    int i,j,n,c;
    int a[max];
    printf("enter the limit of the array\n");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    /*now sorting the array using bubble sort*/
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            { 
                c = a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    printf("array after sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

}