#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct xyz{
    char p[100];
    struct xyz *next;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t=(node *)malloc(sizeof(node));
    printf("enter the string");
    scanf("%s",&t->p);
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
void palindrone(){
    node *t=f;
    int k,i,w,u,g=0;
    char m[100];
    printf("palindrone strings are \n");
    while(t!=NULL){
        w=0;
        u=1;
        strcpy(m,t->p);
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
        }
        t = t->next;
    }
}
void main(){
    node *d;
    int k=0;
    char p;
    do{
        d = createnode();
        insert(d);
        printf("do you want to continue");
        scanf(" %c",&p);
    }while(p=='y');
    palindrone();
    // printf("number of palindrone strings are %d",k);
}