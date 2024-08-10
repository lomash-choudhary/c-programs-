#include<stdio.h>
#define m 50
int a[m];
int front=-1,rear=-1;
void display();
void deletion(){
    int y;
    if(front==-1||front>rear){
        printf("underflow\n");
        return;
    }
    y=a[front];
    printf("item to be deleted is %d",y);
    front++;
    display();
}
void display(){
    int i;
    printf("\nqueue after deletion");
    if(front>-1){
        for(i=front;i<=rear;i++){
            printf("\n%d",a[i]);
        }
    }
}
void main(){
    int n,i,k;
    printf("enter the total size of the queue\n");
    scanf("%d",&n);
    if(n>0){
        printf("enter the number of elements you want to enter in the queue\n");
        scanf("%d",&k);
        if(k>0){
            front=0;
            printf("enter the elements in the queue\n");
            for(i=0;i<k;i++){
                scanf("%d",&a[++rear]);
            }
        }
        deletion();
    }
    else{
        printf("size not assigned to the queue");
        return;
    }
}