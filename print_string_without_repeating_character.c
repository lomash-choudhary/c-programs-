#include<stdio.h>
#include<string.h>
#define m 500
int main(){
    char s[m],w[m]="";
    int n,i,k;
    printf("enter the size of the string");
    scanf("%d",&n);
    printf("enter the string");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++);
    k = i-1;
    int f=0;
    while(f<=k){
        if(s[f]!=s[k]){
            printf("%c",s[f]);
        }
        // if(s[f]==s[k]){
        //     continue;
        // }
        f++;
        k--;
    }
    puts(w);
}
