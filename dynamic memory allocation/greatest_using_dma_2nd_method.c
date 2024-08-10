#include<stdio.h>
#include<stdlib.h>
void greatest(int *,int *,int *);
int *createvariable();
int main(){
    int *p,*q,*w;
    p = createvariable();
    q = createvariable();
    w = createvariable();
    if(p==NULL||q==NULL||w==NULL){
        printf("memory is not allocated");
        return 0;
    }
    greatest(p,q,w);
    free(p);
    free(q);
    free(w);
    return 0;
}
int *createvariable(){
    int *t;
    t = (int *)malloc(sizeof(int));
    printf("enter the numbers");
    scanf("%d",t);
    return(t);
}
void greatest(int *a,int *b,int *c){
    if(*a>*b&&*a>*c){
        printf("%d is greatest",*a);
    }
    else if(*b>*a&&*b>*c){
        printf("%d is greatest",*b);
    }
    else{
        printf("%d is greatest",*c);
    }
}