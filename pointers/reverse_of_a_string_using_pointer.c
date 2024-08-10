#include<stdio.h>
#include<stdlib.h>
void rev(char *);
int main(){
    int n;
    char *p;
    printf("enter the limit of the string");
    scanf("%d",&n);
    p = (char *)calloc(n+1,sizeof(char));
    if(p==NULL){
        printf("memory not allocated");
        exit(0);
    }
    while (getchar()!='\n');
    printf("enter the string\n");
    fgets(p,n+1,stdin);
    //printf("enterd string is\n");
    rev(p);
    printf("reverse of te string is \n");
    puts(p);
    free(p);
}
void rev(char *p){
    char t;
    char *k=p;
    char *s=p;
    while(*k!='\0'){
        k++;
    }
    k--;
    while(s<k){
        t = *s;
        *s = *k;
        *k = t;
        s++;
        k--;
    }
}
    