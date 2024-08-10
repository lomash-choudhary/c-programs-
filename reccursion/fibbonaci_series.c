#include<stdio.h>
int fibbo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibbo(n-1)+fibbo(n-2);
    }
}
int main(){
    int n,i;
    printf("enter the limit till where you want to print the series");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d",fibbo(i));
    }
}