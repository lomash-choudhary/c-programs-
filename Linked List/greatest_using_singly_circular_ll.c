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
    printf("entr the data");
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
        m->next=f;
    }
    r=m;
}
node *greatest(){
    node *t=f,*m;
    m=t;
    do{
        if(t->data > m->data){
            m=t;
        }
        t = t->next;
    }while(t!=f);
    return(m);
}
void main(){
    char p='y';
    while(p=='y'){
        insert(createnode());
        printf("do you want to continue");
        scanf(" %c",&p);
    }
    printf("greatest number is %d",greatest()->data);
}