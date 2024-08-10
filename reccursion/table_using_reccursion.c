#include<stdio.h>
void table(int i,int n){
    if(i==11){
        return;
    }
    else{
        printf("%d\n",n*i);
        table(i+1,n);
    }
}
int main(){
    int n,i=1;
    printf("enter the number whose table you want to print");
    scanf("%d",&n);
    table(i,n);
}