#include<stdio.h>
int fact(int n){
    if(n>1){
        return(n*fact(n-1));
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    printf("enter the number whose factorial you want to find");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,fact(n));
}