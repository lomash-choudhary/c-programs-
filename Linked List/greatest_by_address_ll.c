#include<stdio.h>
#include<stdlib.h>
typedef struct xyz{
    int data;
    struct xyz *next;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t =(node *)malloc(sizeof(node));
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
node *greatest(){
    // node *t=f;
    // node *k;
    // int m=0;
    // while(t!=NULL){
    // if(t->data>m){
    //     m = t->data;
    //     k=t;
    // }
    // t = t->next;
    // }
    // return(k);
    //another method
    node *t=f,*m;
    m=t;
    while(t!=NULL){
        if(t->data>m->data){
            m=t;
        }
        t=t->next;
    }
    return(m);
}
void main(){
    char p='y';
    node *d;
    while(p=='y'){
        d = createnode();
        insert(d);
        printf("do you want to continue");
        scanf(" %c",&p);
    }
    printf("greatest number using addresss is = %d",greatest()->data);
}