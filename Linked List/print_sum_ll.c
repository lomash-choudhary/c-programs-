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
    printf("enter the number");
    scanf("%d",&t->data);
    t->next=NULL;
    return(t);
}
void insert(node *m){
    if(f==NULL){
        f = m;
    }
    else{
        r->next=m;
    }
    r=m;
}
int sum(){
    node *t=f;
    int m=0;
    while(t!=NULL){
        m = m+t->data;
        t = t->next;
    }
    return m;
}
void display(int m){
    printf("sum of digits is = %d",m);
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
    int k = sum();
    display(k);
    free(d);
}