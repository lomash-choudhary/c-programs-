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
        printf("enter the data in the list");
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
    void display(){
        node *k=f;
        do{
            printf("\n%d",k->data);
            k=k->next;
        }while(k!=f);
    }
    // void insertinbeggning(node *m){
    //     node *k=f;
    //     do{
    //         k=k->next;
    //     }while(k->next!=f);
    //     m->next=f;
    //     f=m;
    //     k->next=f;
    //     display();
    // }
    // void insertinend(node *m){
    //     node *k=f;
    //     do{
    //         k=k->next;
    //     }while(k->next!=f);
    //     k->next=m;
    //     m->next=f;
    //     display();
    // }
    // void insertinorder(node *m){
    //     node *k=f,*r=NULL;
    //     do{
    //         if(k->data>m->data)
    //         break;
    //         r=k;
    //         k=k->next;
    //     }while(k->next!=f);
    //     if(r==NULL)
    //     insertinbeggning(m);
    //     if(r->next==f)
    //     insertinend(m);
    //     else{
    //         r->next=m;
    //         m->next=k;
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
        free(k);
        display();
    }
    void deletefromend(){
        node *k=f,*r;
        do{
            r=k;
            k=k->next;
        }while(k->next!=f);
        r->next=f;
        k->next=NULL;
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
        }while(k!=f);
        if(r==NULL)
        deletefrombeg();
        else if(r->next==f)
        deletefromend();
        else{
            r->next=k->next;
            k->next=NULL;
            free(k);
            display();
        }
    }
    int main(){
        int n;
        char p='y';
        while(p=='y'){
            insert(createnode());
            printf("do you want to continue(y/n)?");
            scanf(" %c",&p);
        }
        // printf("insert in beg");
        // insertinbeggning(createnode());
        // printf("insert in end");
        // insertinend(createnode());
        // printf("insert in order");
        // insertinorder(createnode());
        // printf("delete from beg");
        // deletefrombeg();
        // printf("delete from end");
        // deletefromend();
        printf("delete a particular value");
        printf("enter the value you want to delete");
        scanf("%d",&n);
        deleteinorder(n);
    }