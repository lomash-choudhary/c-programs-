#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct xyz{
    char s[100];
    struct xyz *next;
}node;
node *f=NULL,*r;
node *createnode(){
    node *t;
    t=(node *)malloc(sizeof(node));
    printf("enter the string\n");
    scanf("%s",&t->s);
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
int palindrone(){
    node *t=f;
    int i,k,c=0;
    char m[100];
    do{
        int w=0,u=1;
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
    int q;
    while(p=='y'){
        insert(createnode());
        printf("do you want to continue");
        scanf(" %c",&p);
    }
    q = palindrone();
    printf("total number of palindrone strings are %d",q);
}
