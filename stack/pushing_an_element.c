#include<stdio.h>
#define m 50
int a[m];
int top=-1;
void push(int , int);
int main(){
    int n,k,i,val,w;
    printf("enter the size of the stack");
    scanf("%d",&n);
    printf("enter the amount of elements you want to enter in the stack");
    scanf("%d",&k);
    printf("enter the elements in the stack");
    for(i=0;i<k;i++){
        // if(i>=k){
        //     break;
        // }
        scanf("%d",&a[++top]);
    }
    printf("enter the value you want to enter in the stack");
    scanf("%d",&val);
    push(val,n);
    printf("stack after pushing element");
    for(i=0;i<=top;i++){
        printf("%d",a[i]);
    }
    return 0;
}
void push(int val,int n){
    if(top==n-1){
        printf("overflow");
        return;
    }
    else{
        a[++top]=val;
    }
}