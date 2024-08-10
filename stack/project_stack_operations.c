#include<stdio.h>
#define m 50
int a[m];
int top=-1;
void push(int ,int );
void pop(int );
void display();
int main(){
    int n,i,k,ch,val;
    printf("enter the size of the stack\n");
    scanf("%d",&n);
    printf("enter the total number of elements you want to enter in the stack\n");
    scanf("%d",&k);
    printf("enter the elements in the stack\n");
    for(i=0;i<k;i++){
        // if(i>=k)
        // break;
        scanf("%d",&a[++top]);
    }
    printf("enter 1 to push the element in the stack\nenter 2 to pop the element from the stack\nenter 3 to display the stack\nenter 4 to terminate the process");
    printf("\nenter the choice");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("enter the number to be added in the stack");
        scanf("%d",&val);
        push(val,n);
        break;
        case 2: pop(n);
        break;
        case 3: display();
        break;
        default: printf("process terminated");
        break;
    }
}
void push(int val,int n){
    if(top==n-1){
        printf("overflow");
        return;
    }
    else{
        a[++top]=val;
    }
    display();
}
void pop(int n){
    int y;
    if(top==-1){
        printf("underflow");
        return;
    }
    else{
        y=a[top];
        printf("deleted item from the stack is %d\n",y);
        top--;
    }
    display();
}
void display(){
    int i;
    for(i=0;i<=top;i++){
        printf("\n%d",a[i]);
    }
}