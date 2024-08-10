#include<stdio.h>
#include<stdlib.h>
typedef struct xyz
{
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
        m->next=f;
    }
    r=m;
}
int prime(){
    node *t=f;
    int i,k=0;
    do{
        int c=0;
        for(i=1;i<=t->data;i++){
            if(t->data%i==0){
                c++;
            }
        }
        if(c==2){
            k++;
        }
        t = t->next;
    }while(t!=f);
    return(k);
}
void main(){
    char p='y';
    while(p=='y'){
        insert(createnode());
        printf("do you want to continue");
        scanf(" %c",&p);
    }
    printf("total enterd prime numbers are %d",prime());
}
