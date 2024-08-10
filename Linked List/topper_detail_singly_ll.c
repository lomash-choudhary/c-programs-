#include<stdio.h>
#include<stdlib.h>
typedef struct xyz{
    char nm[100];
    int rn;
    int tm;
    struct xyz *next;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t=(node *)malloc(sizeof(node));
    printf("enter the name of the student");
    scanf("%s",&t->nm);
    printf("enter the roll number of the student");
    scanf("%d",&t->rn);
    printf("enter the total marks of the student");
    scanf("%d",&t->tm);
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
node *topper(){
    node *t=f,*m;
    m=t;
    while(t!=NULL){
        if(t->tm > m->tm){
            m=t;
        }
        t = t->next;
    }
    return(m);
}
void main(){
    node *d;
    char p;
    do{
        insert(createnode());
        printf("do you want to continue");
        scanf(" %c",&p);
    }while(p=='y');
    printf("topper details are \n");
    printf("name :- %s\nroll no :- %d\ntotal marks :- %d",topper()->nm,topper()->rn,topper()->tm);
}