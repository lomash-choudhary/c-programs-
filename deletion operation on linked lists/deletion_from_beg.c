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
void deletefrombeg(){
    node *t=f;
    f=f->next;
    t->next=NULL;
    free(t);
    printf("after deletion\n");
    display();
}
void main(){
    char p='y',ch;
    while(p=='y'){
        insert(createnode());
        printf("do you want to continue");
        scanf(" %c",&p);
    }
    display();
    printf("do you want to delete the first node?(y/n)");
    scanf(" %c",&ch);
    if(ch=='y'){
        deletefrombeg();
    }
    else{
        display();
    }
}