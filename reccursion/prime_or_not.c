#include<stdio.h>
int prime(int n,int i){
    if(i==1){
        return 1;
    }
    else{
        if(n%i==0)
        return 0;
        else
        prime(n,i-1);
    }
}
int main(){
    int n,d;
    printf("enter the number which you want to check is prime or not");
    scanf("%d",&n);
    if(n==0||n==1){
        prime("%d is not prime",n);
    }
    d=prime(n,n-1);
    if(d==1){
        printf("number is prime %d",n);
    }
    else{
        printf("number is not prime %d",n);
    }
}