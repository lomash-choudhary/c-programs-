#include<stdio.h>
#include<stdlib.h>
typedef struct xyz{
    int data;
    struct xyz *next;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t = (node *)malloc(sizeof(node));
    printf("enter the number you want to check");
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
int howmanyprime(){
    node *t=f;
    int c=0,k=0,i;
    while(t!=NULL){
        for(i=1;i<=t->data;i++){
            if(t->data%i==0){
                c++;
            }
        }
        if(c==2){
            k++;
        }
        c = 0;
        t = t->next;
    }
    return k;
}
void main(){
    char p;
    node *d;
    int k;
    do{
        d = createnode();
        insert(d);
        printf("do you want to continue");
        scanf(" %c",&p);
    }while(p=='y');
    k = howmanyprime();
    printf("total prime numbers are %d",k);
}