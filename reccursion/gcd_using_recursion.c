#include<stdio.h>
int gddc(int n1 , int n2){
    if (n2!=0){
        return (n1,n2%n1);
    }
    else{
        return n1;
    }
}
int main(){
    int n1,n2;
    printf("enter the two numbers ");
    scanf("%d%d",&n1,&n2);
    printf("gdc is %d",gddc(n1,n2));
}

