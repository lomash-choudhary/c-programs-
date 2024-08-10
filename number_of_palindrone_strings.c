#include<stdio.h>
int palin(char s)
int main(){
    int i;
    char s[6][50];
    printf("enter six strings and find how many palindrone");
    for(i=0;i<6;i++){
        scanf("%s",&s[i]);
        palin(s);
    }
}