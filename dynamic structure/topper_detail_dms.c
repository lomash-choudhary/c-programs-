#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    char nm[100];
    int rn;
    int tm;
}s;
s *var(int );
void data(s * ,int );
int topper(s * ,int );
display(s * ,int );
void main(){
    s *y;
    int n,d;
    printf("enter the number of students whose details you want to enter");
    scanf("%d",&n);
    y = var(n);
    if(y==NULL){
        printf("memory is not allocated");
        return -1;
    }
    else{
        data(y,n);
        d = topper(y,n);
        display(y,d);
    }
}
s *var(int n){
    s *t;
    t =(s *)malloc(n*sizeof(s));
    return(t);
}
void data(s *y,int n){
    int i;
    for(i=0;i<n;i++){
        printf("enter the name of the stundent %d\n",i+1);
        scanf("%s",&(y+i)->nm);
        printf("enter the roll number of the stundent %d\n",i+1);
        scanf("%d",&(y+i)->rn);
        printf("enter the total marks of the stundent %d\n",i+1);
        scanf("%d",&(y+i)->tm);
    }
}
int topper(s *y,int n){
    int i,m=0,k;
    for(i=0;i<n;i++){
        if((y+i)->tm>m){
            m = (y+i)->tm;
            k = i;
        }
    }
    return(k);
}
display(s *y,int k){
    printf("topper details are \n");
    printf("name :- %s\nroll no :- %d\ntotal marks :- %d",(y+k)->nm,(y+k)->rn,(y+k)->tm);
}