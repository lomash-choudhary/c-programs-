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
void deletefromend(){
    node *k=f,*m=NULL;
    if(k==NULL){
        printf("list doesnot exists");
        return;
    }
    while(k->next!=NULL){
        m=k;
        k=k->next;
    }
    m->next=NULL;
    free(k);
    printf("after deletion from end\n");
    display();
}
void main(){
    char p='y';
    while(p=='y'){
        insert(createnode());
        printf("do you want to continue");
        scanf(" %c",&p);
    }
    printf("before deletion\n");
    display();
    deletefromend();
}