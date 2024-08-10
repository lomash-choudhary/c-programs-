#include<stdio.h>
#define m 50
int a[m];
int front=-1;
int rear=-1;
int main(){
    int n,i,k;
    printf("enter the size of the queue");
    scanf("%d",&n);
    printf("enter the total number of elements you want to enter in the queue");
    scanf("%d",&k);
    if(k>0){
        front=0;
        printf("enter the elements in the queue");
        for(i=0;i<n;i++){
            if(i>=k)
            break;
            scanf("%d",&a[++rear]);
        }
    }
    deletion(n);
    if(front!=-1){
    printf("queue after deletion of first element");
    for(i=front;i<=rear;i++){
        printf("%d",a[i]);
    }
    }
    return 0;
}
void deletion(int n){
    int y;
    if(front==-1){
        printf("underflow");
        return;
    }
    y=a[front];
    printf("deleted item from the queue is %d",y);
    if(front==rear){
        front=rear=-1;
    }
    else if(front==n-1){
        front=0;
    }
    else{
        front++;
    }
}