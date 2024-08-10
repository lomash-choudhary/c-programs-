#include<stdio.h>
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int n,m;
    printf("enter the number whose factorial you want to get");
    scanf("%d",&n);
    m = fact(n);
    printf("factorial is = %d",m);
    return 0;
}
