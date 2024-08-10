#include<stdio.h>
#include<stdlib.h>
typedef struct xyz{
    int data;
    struct xyz *previous;
    struct xyz *next;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t=(node *)malloc(sizeof(node));
    printf("enter the data");
    scanf("%d",&t->data);
    t->next=NULL;
    t->previous=NULL;
    return t;
}
void insert(node *m){
    if(f==NULL){
        f=m;
    }
    else{
        r->next=m;
        m->previous=r;
    }
    r=m;
}
node *greatest(){
    node *t=f,*m;
    m=t;
    while(t!=NULL){
        if(t->data > m->data){
            m = t;
        }
        t = t->next;
    }
    return(m);
}
void main(){
    node *d;
    char p;
    do{
        d=createnode();
        insert(d);
        printf("do you want to continue");
        scanf(" %c",&p);
    }while(p=='y');
    printf("greatest number in the linked list is = %d",greatest()->data);
}
