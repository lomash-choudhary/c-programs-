#include<stdio.h>
#include<stdlib.h>
typedef struct xyz{
    int data;
    struct xyz *next;
    struct xyz *previous;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t=(node *)malloc(sizeof(node));
    printf("enter the data in the list\n");
    scanf("%d",&t->data);
    t->next=NULL;
    t->previous=NULL;
    return(t);
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
void display(){
    node *k=f;
    while(k!=NULL){
        printf("%d\n",k->data);
        k=k->next;
    }
}
// void insertinbeg(node *m){
//     m->next=f;
//     f->previous=m;
//     f=m;
//     display();
// }
// void insertinend(node *m){
//     node *k=f;
//     while(k->next!=NULL){
//         k=k->next;
//     }
//     k->next=m;
//     m->previous=k;
//     display();
// }
// void insertinorder(node *m){
//     node *k=f,*r=NULL;
//     while(k!=NULL){
//         if(k->data > m->data)
//         break;
//         r=k;
//         k=k->next;
//     }
//     if(r==NULL)
//     insertinbeg(m);
//     else if(k==NULL)
//     insertinend(m);
//     else{
//         m->next=r->next;
//         r->next=m;
//         m->previous=r;
//         k->previous=m;
//         display();
//     }
// }
void deletefrombeg(){
    node *k=f;
    f=f->next;
    k->next=NULL;
    free(k);
    display();
}
void deletefromend(){
    node *k=f;
    while(k->next!=NULL){
        r=k;
        k=k->next;
    }
    r->next=NULL;
    k->previous=NULL;
    free(k);
    display();
}
void deleteofvalue(int u){
    node *k=f,*r=NULL;
    while(k!=NULL){
        if(k->data==u)
        break;
        r=k;
        k=k->next;
    }
    if(k==NULL){
        printf("list does not exists");
        exit(1);
    }
    else if(r==NULL)
    deletefrombeg();
    else if(k->next==NULL)
    deletefromend();
    else{
        r->next=k->next;
        (k->next)->previous=r;
        k->next=NULL;
        k->previous=NULL;
        display();
    }
}
int main(){
    char p='y';
    int w;
    while(p=='y'){
        insert(createnode());
        printf("do you want to continue\n");
        scanf(" %c",&p);
    }
    // printf("insert in beg");
    // insertinbeg(createnode());
    // printf("insert in end");
    // insertinend(createnode());
    // printf("insert in order");
    // insertinorder(createnode());
    // printf("deletion of first node");
    // deletefrombeg();
    // printf("deletion from end");
    // deletefromend();
    printf("enter the number to be deleted from the list");
    scanf("%d",&w);
    printf("deletion in order");
    deleteofvalue(w);
}