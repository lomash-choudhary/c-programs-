#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *var();
void data(char *);
int main(){
    char *y;
    int d;
    y = var();
    if(y==NULL){
        printf("memory is not allocated");
        return -1;
    }
    else{
        data(y);
        // d = palindrone(y);
        // display(d);
    }
    return 0;
}
char *var(){
    char *t;
    t =(char *)malloc(120*sizeof(char));
    return(t);
}
void data(char *y){
    int i,j,k;
    for(i=0;i<6;i++){
        printf("enter the %d string",i+1);
        scanf(" %s",y[i]);
        for(j=0;y[i][j]!='\0';j++);
        k = j-1;
        y=y+k;
    }
}
