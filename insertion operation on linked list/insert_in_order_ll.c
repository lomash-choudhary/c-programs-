#include<stdio.h>
#include<stdlib.h>
typedef struct xyz{
    int data;
    struct xyz *next;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t=(node *)malloc(sizeof(node));
    printf("enter the data");
    scanf("%d",&t->data);
    t->next=NULL;
    return(t);
}
void insert(node *m){
    if(f==NULL){
        f=m;
    }
    else{
        r->next=m;
    }
    r=m;
}
void display(){
    node *t=f;
    while(t!=NULL){
        printf("%d\n",t->data);
        t=t->next;
    }
}
void insertinbeg(node *y){
    y->next=f;
    f=y;
    printf("after insertion\n");
    display();
}
void insertinend(node *y){
    node *d=f;
    while(d->next!=NULL)
        d = d->next;
    d->next=y;
    printf("after insertion\n");
    display();
}
void insertinorder(node *y){
    node *k=f,*m=NULL;
    while(k!=NULL){
        if(k->data > y->data){
            break;
        }
        r=k;
        k = k->next;
    }
    if(r==NULL){
        insertinbeg(y);
    }    
    else if(r->next=NULL){
        insertinend(y);
    }
    else{
        r->next=y;
        y->next=k;
        printf("after insertion\n");
        display();
    }
}
void main(){
    char p='y';
    while(p=='y'){
        insert(createnode());
        printf("do you want to continue");
        scanf(" %c",&p);
    }
    printf("before insertion\n");
    display();
    insertinorder(createnode());

}