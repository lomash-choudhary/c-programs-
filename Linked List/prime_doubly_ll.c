#include<stdio.h>
#include<stdlib.h>
typedef struct xyz{
    int data;
    struct xyz *p;
    struct xyz *n;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t=(node *)malloc(sizeof(node));
    printf("enter the data");
    scanf("%d",&t->data);
    t->n=NULL;
    t->p=NULL;
    return t;
}
void insert(node *m){
    if(f==NULL){
        f=m;
    }
    else{
        r->n=m;
        m->p=r;
    }
    r=m;
}
int prime(){
    node *t=f;
    int i,c,k=0;
    while(t!=NULL){
        c=0;
        for(i=1;i<=t->data;i++){
            if((t->data)%i==0){
                c++;
            }
        }
        if(c==2)
        k++;
        t = t->n;
    }
    return k;
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
    printf("totatl number of entered prime numbers are %d",prime());
}