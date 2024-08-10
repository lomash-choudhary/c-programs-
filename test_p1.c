#include<stdio.h>
#define m 50
int a[m];
int front=-1,rear=-1;
void display(){
    int i;
    if(front!=-1){
        printf("queue after deletion\n");
        for(i=front;i<=rear;i++){
            printf("\n%d",a[i]);
        }
    }
}
void deletion(int n){
    int y;
    if(front==-1){
        printf("underflow\n");
        return;
    }
    y=a[front];
    printf("item to be deleted \n%d",y);
    if(front==rear){
        front=rear=-1;
    }
    else if(front==n-1){
        front=0;
    }
    else{
        front++;
    }
    display();
}
void main(){
    int n,k,i;
    printf("enter the size of the queue\n");
    scanf("%d",&n);
    if(n>0){
        printf("enter the total number of elements you want to enter in the queue\n");
        scanf("%d",&k);
        if(k>0){
            front=0;
            printf("enter the elements in the queue\n");
            for(i=0;i<k;i++){
                scanf("%d",&a[++rear]);
            }
        }
        deletion(n);
    }
    else{
        printf("size not initialized to the queue\n");
        return;
    }
}