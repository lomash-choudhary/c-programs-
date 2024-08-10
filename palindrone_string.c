#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char s[100];
    printf("enter the string");
    gets(s);
    int i,k,d=1,f;
    for(i=0;s[i]!='\0';i++);
    k = i-1;
    for(f=0;f<=k;f++){
        if(s[f]!=s[k]){
            d = 0;
            break;
        }
        k--;
    }
    if(d==1){
        printf("string is palindrone");
    }
    else{
        printf("string is not palindrone");
    }
}