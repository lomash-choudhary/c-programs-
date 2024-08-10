#include<stdio.h>
#define m 50
int a[m];
int top=-1;
void pop();
int main(){
    int n,k,i;
    printf("enter the size of the stack\n");
    scanf("%d",&n);
    printf("enter the number of elements you want to enter in the stack\n");
    scanf("%d",&k);
    if(k>0){
    printf("enter the elements in the stack");
    for(i=0;i<k;i++){
        // if(i>=k)
        // break;
        scanf("%d",&a[++top]);
    }
    }
    pop();
    if(top>-1){
    printf("stack after poping the last element\n");
    for(i=0;i<=top;i++){
        printf("%d",a[i]);
    }
    }
    return 0;
}
void pop(){
    int y;
    if(top==-1){
        printf("underflow");
        return;
    }
    else{
        printf("item to be deleted %d\n",a[top]);
        y=a[top];
        top--;
        printf("deleted item from stack is %d\n",y);
    }
}