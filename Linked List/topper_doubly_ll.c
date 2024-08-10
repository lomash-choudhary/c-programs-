#include<stdlib.h>
#include<stdio.h>
typedef struct xyz{
    char nm[100];
    int rn;
    int tm;
    struct xyz *next;
    struct xyz *previous;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t=(node *)malloc(sizeof(node));
    printf("enter the name of the student");
    scanf("%s",&t->nm);
    printf("enter the roll no of the student");
    scanf("%d",&t->rn);
    printf("enter the total marks of the student");
    scanf("%d",&t->tm);
    t->next=NULL;
    t->previous=NULL;
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
node *topper(){
    node *t=f,*m;
    m=t;
    while(t!=NULL){
        if(t->tm > m->tm){
            m=t;
        }
        t=t->next;
    }
    return(m);
}
void main(){
    char p='y';
    while(p=='y'){
        insert(createnode());
        printf("do you want to continue? (y/n)");
        scanf(" %c",&p);
    }
    printf("details of the topper\n");
    printf("name :- %s\nroll number :- %d\ntotal marks :- %d\n",topper()->nm,topper()->rn,topper()->tm);
}
