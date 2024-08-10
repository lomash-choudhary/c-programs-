#include<stdio.h>
int main()
{
    int i,n,f=1;
    float k=0;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f = f*i;
        k+=(float)i/f;
        if(i<n){
        printf("%d/%d!+",i,i);
        }
        else{
            printf("%d/%d!",i,i);
        }
    }
    if(n>=1){
    printf("sum of the series is = %f",k);
    }
    return 0;
}
