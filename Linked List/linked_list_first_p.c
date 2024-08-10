#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct xyz{
    int data;
    struct xyz *next;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t=(node *)malloc(sizeof(node));
    printf("enter the data\n");
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
    r = m;
}
void display(){
    node *t=f;
    printf("value are\n");
    while(t!=NULL){
        printf("%d\n",t->data);
        t = t->next;
    }
}
void main(){
    node *d;
    char p; 
    do{
        d = createnode();
        insert(d);
        printf("do you want to contiune if yes then input y\n");
        scanf(" %c",&p);
    }while(p=='y');   
    display();
}