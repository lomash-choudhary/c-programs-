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
        t = t->next;
    }
}
void deletefrom
void deleteinorder(int t){
    node *k=f,*r=NULL;
    while(k!=NULL){
        if(k->data==t){
            break;
        }
        r=k;
        k=k->next;
    }
    if(k==NULL){
        printf("list does not exists");
        return;
    }
    else if(r==NULL){
        deletefrombeg();
    }
    else if(k->next==NULL){
        deletefromend();
    }
    else{
        r->next=k->next;
        k->next=NULL;
        printf("after deleteion\n");
        display();
    }
}
void main(){
    char p='y';
    int m;
    while(p=='y'){
        insert(createnode());
        printf("do you want to continue");
        scanf(" %c",&p);
    }
    printf("beofre deletion\n");
    display();
    printf("enter the number you want to delete");
    scanf("%d",&m);
    deleteinorder(m);
}