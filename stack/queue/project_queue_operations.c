#include<stdio.h>
#define m 50
int front=-1,rear=-1;
int a[m];
void insertion(int ,int);
void deletion();
void display();
int main(){
    int n,k,i,val,ch;
    printf("enter the size of the queue\n");
    scanf("%d",&n);
    printf("enter the number of elements you want to enter in the queue\n");
    scanf("%d",&k);
    if(k>0){
        front = 0;
        printf("enter the elements in the queue\n");
        for(i=0;i<n;i++){
            if(i>=k)
            break;
            scanf("%d",&a[++rear]);
        }
        printf("enter 1 if you want to insert the element in the queue\nenter 2 if you want to delete the element from the queue\nenter 3 if you want to display the queue element\nenter 4 to terminate the process\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("enter the element to be entered in the queue\n");
            scanf("%d",&val);
            insertion(n,val);
            break;
            case 2: deletion();
            break;
            case 3: display();
            break;
            case 4: printf("process terminated");
            break;
            default: printf("wrong choice");
        }
    }
}
void insertion(int n,int val){
    if(rear==n-1){
        printf("overflow");
        return;
    }
    a[++rear]=val;
    display();
}
void deletion(){
    int y;
    if(front==-1){
        printf("underflow");
        return;
    }
    if(front==rear){
        front=rear=-1;
    }
    y=a[front];
    front++;
    printf("deleted item %d\n",y);
    display();
}
void display(){
    int i;
    for(i=front;i<=rear;i++){
        printf("%d",a[i]);
    }
}