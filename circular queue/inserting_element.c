#include<stdio.h>
#define m 50
int a[m];
int front=-1;
int rear=-1;
int main(){
    int n,k,i,val;
    printf("enter the size of the queue");
    scanf("%d",&n);
    printf("enter the amount of elements you want to enter in the queue");
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
    printf("enter the element to be inserted in the queue");
    scanf("%d",&val);
    insertion(val,n);
    printf("queue after insertion");
    for(i=front;i<=rear;i++){
        printf("%d",a[i]);
    }
    return 0;
}
void insertion(int val,int n){
    if(rear==front-1||front==0&&rear==n-1){
        printf("overflow");
        return;
    }
    if(rear==n-1){
        rear=0;
    }
    else{
        rear++;
    }
    a[rear]=val;
    if(front==-1)
    front=0;
}