#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct xyz{
    char s[100];
    struct xyz *n;
    struct xyz *p;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t=(node *)malloc(sizeof(node));
    printf("enter the data");
    scanf("%s",&t->s);
    t->n=NULL;
    t->p=NULL;
    return(t);
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
void palindrone(){
    node *t=f;
    char m[100];
    int w,i,k;
    printf("palindrone strings are \n");
    while(t!=NULL){
        int r=1,w=0;
        strcpy(m,t->s);
        for(i=0;m[i]!='\0';i++);
        k=i-1;
        while(w<=k){
            if(m[w]!=m[k]){
                r=0;
                break;
            }
            w++;
            k--;
        }
        if(r==1){
            printf("%s\n",m);
        }
        t = t->n;
    }
}
void main(){
    node *d;
    char p;
    do{
        insert(createnode());
        printf("do you want to continue");
        scanf(" %c",&p);
    }while(p=='y');
    palindrone();
}