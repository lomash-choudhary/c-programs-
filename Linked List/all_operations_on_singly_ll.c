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
    printf("enter the data to be entered");
    scanf("%d",&t->data);
    t->next=NULL;
    return t;
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
void display(){
    node *t=f;
    while(t!=NULL){
        printf("%d\n",t->data);
        t=t->next;
    }
}
// void insertinbeg(node *m){
//     m->next=f;
//     f=m;
//     display();
// }
// void insertinend(node *m){
//     node *t=f;
//     while(t->next!=NULL){
//         t=t->next;
//     }
//     t->next=m;
//     display();
// }
// void insertinorder(node *m){
//     node *k=f,*w=NULL;
//     while(k!=NULL){
//         if(k->data > m->data)
//         break;
//         w=k;
//         k=k->next;
//     }
//     if(w==NULL)
//     insertinbeg(m);
//     else if(w->next=NULL)
//     insertinend(m);
//     else{
//         w->next=m;
//         m->next=k;
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
    node *k=f,*r=NULL;
    if(k==NULL){
        printf("list does not exists\n");
        exit(1);
    }
    while(k->next!=NULL){
        r=k;
        k=k->next;
    }
    r->next=NULL;
    free(k);
    display();
}
void deleteinorder(int u){
    node *k=f,*r=NULL;
    while(k!=NULL){
        if(k->data==u)
        break;
        r=k;
        k=k->next;
    }
    if(k==NULL){
    printf("list does not exist");
    exit(1);
    }
    else if(r==NULL){
        deletefrombeg();
    }
    else if(k->next==NULL){
        deletefromend();
    }
    else{
        r->next=k->next;
        k->next=NULL;
        free(k);
        display();
    }
}
int main(){
    char p='y';
    int u;
    while(p=='y'){
        insert(createnode());
        printf("do you want to continue");
        scanf(" %c",&p);
    }
    //printf("insert new node in beg");
    //insertinbeg(createnode());
    // printf("insert new node in end");
    // insertinend(createnode());
    // printf("insert in order");
    // insertinorder(createnode());
    // printf("deletion of first node\n");
    // deletefrombeg();
    // printf("deletion from end\n");
    // deletefromend();
    printf("enter the number to be deleted from the list");
    scanf("%d",&u);
    printf("deletion in order\n");
    deleteinorder(u);
}