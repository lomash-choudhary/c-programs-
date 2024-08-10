#include<stdio.h>
#define m 50
int a[m];
int front=-1,rear=-1;
void display();
void insertion(int val,int n){
    if(rear==n-1){
        printf("overflow\n");
        return;
    }
    a[++rear]=val;
    display();
}
void display(){
    int i;
    printf("queue after insertion of elements\n");
    for(i=front;i<=rear;i++){
        printf("\n%d",a[i]);
    }
}
void main(){
    int n,k,i,val;
    printf("enter the size of the queue\n");
    scanf("%d",&n);
    if(n>0){
        printf("enter the number of elements you want to enter in the queue\n");
        scanf("%d",&k);
        front=0;
        if(k>0){
        printf("enter the elements in the queue\n");
        for(i=0;i<k;i++){
            scanf("%d",&a[++rear]);
        }
        }
        printf("enter the element you want to enter in the queue\n");
        scanf("%d",&val);
        insertion(val,n);
    }
    else{
        printf("queue not assigned can not input elements in the queue");
        return;
    }
}
