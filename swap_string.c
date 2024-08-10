#include<stdio.h>
#include<string.h>
int main(){
    char a[3][20]={{"ABC"},{"COMPUTER"},{"MOHAN"}};
    char (*p)[20]=a;
    char c[20];
    strcpy(c,a[0]);
    strcpy(a[0],a[1]);
    strcpy(a[1],c);
    printf("%s\n%s",*p,*(p+1));

}