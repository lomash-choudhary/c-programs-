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
    printf("enter the data");
    scanf("%d",&t->data);
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
        m->next=f;
        f->previous=m;
    }
    r=m;
}
void display(){
    node *k=f;
    do{
        printf("\n%d\n",k->data);
        k=k->next;
    }while(k!=f);
}
// void insertinbeg(node *m){
//     node *k=f;
//     do{
//         k=k->next;
//     }while(k->next!=f);
//     k->next=m;
//     m->previous=k;
//     m->next=f;
//     f=m;
//     display();
// }
// void insertinend(node *m){
//     node *k=f;
//     do{
//         k=k->next;
//     }while(k->next!=f);
//     m->next=f;
//     f->previous=m;
//     k->next=m;
//     m->previous=k;
//     display();
// }
// void insertinorder(node *m){
//     node *k=f,*r=NULL;
//     do{
//         if(k->data > m->data)
//         break;
//         r=k;
//         k=k->next;
//     }while(k->next!=f);
//     if(r==NULL)
//     insertinbeg(m);
//     else if(k->next==f)
//     insertinend(m);
//     else{
//         r->next=m;
//         m->previous=r;
//         m->next=k;
//         k->previous=m;
//         display();
//     }
// }
void deletefrombeg(){
    node *k=f;
    do{
        k=k->next;
    }while(k->next!=f);
    k->next=f->next;
    k=f;
    f=f->next;
    k->next=NULL;
    k->previous=NULL;
    display();
}
void deletefromend(){
    node *k=f,*r;
    do{
        r=k;
        k=k->next;
    }while(k->next!=f);
    r->next=f;
    f->previous=r;
    k->next=NULL;
    k->previous=NULL;
    free(k);
    display();
}
void deleteinorder(int n){
    node *k=f,*r=NULL;
    do{
        if(k->data == n)
        break;
        r=k;
        k=k->next;
    }while(k->next!=f);
    if(r==NULL)
    deletefrombeg();
    else if(k->next==f)
    deletefromend();
    else{
        r->next=k->next;
        (k->next)->previous=r;
        k->next=NULL;
        k->previous=NULL;
        free(k);
        display();
    }
}
int main(){
    char p='y';
    int n;
    while(p=='y'){
        insert(createnode());
        printf("do you want to continue(y/n)?");
        scanf(" %c",&p);
    }
    // printf("insert in beg");
    // insertinbeg(createnode());
    // printf("insert in end");
    // insertinend(createnode());
    // printf("insert in order");
    // insertinorder(createnode());
    // printf("delete from beg");
    // deletefrombeg();
    // printf("delete from end");
    // deletefromend();
    printf("delete in order");
    printf("enter the number you want to delete");
    scanf("%d",&n);
    deleteinorder(n);
}
