#include<stdio.h>
#include<stdlib.h>
typedef struct xyz{
    int data;
    struct xyz *next;
}node;
node *f=NULL,*r;
node *createnode(int i){
    node *t;
    t=(node *)malloc(sizeof(node));
    printf("input data for node %d:",i);
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
node *swap(){
    node *t=f,*c;
    while(t!=NULL){
        c = t->data;
        t->data = t->next;
        t->next = c;
        t = t->data;
    }
    return(t);
}
void reverse(node *t){
    t = f;
    printf("reverse of linked list is\n");
    while(t!=NULL){
        printf("%d\n",t->next);
        t = t->data;
    }
}
void main(){
    node *d;
    int k,i;
    printf("enter the total number of nodes");
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        d = createnode(i);
        insert(d);
    }
    node *w;
    w = swap();
    reverse(w);
}