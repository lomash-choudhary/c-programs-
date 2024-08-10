#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct xyz{
    char s[100];
    struct xyz *next;
    struct xyz *previous;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t=(node *)malloc(sizeof(node));
    printf("enter the string\n");
    scanf("%s",&t->s);
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
        m->next=f;
        f->previous=m;
    }
    r=m;
}
int palindrone(){
    node *t=f;
    int i,k,c=0;
    char m[100];
    printf("palindrone strings are\n");
    do{
        int u=1,w=0;
        strcpy(m,t->s);
        for(i=0;m[i]!='\0';i++);
        k = i-1;
        while(w<=k){
            if(m[w]!=m[k]){
                u=0;
                break;
            }
            w++;
            k--;
        }
        if(u==1){
            printf("%s\n",m);
            c++;
        }
        t = t->next;
    }while(t!=f);
    return(c);
}
void main(){
    char p='y';
    while(p=='y'){
        insert(createnode());
        printf("do you want to continue\n");
        scanf(" %c",&p);
    }
    int q = palindrone();
    printf("total number of plaindrone strings are %d",q);
}