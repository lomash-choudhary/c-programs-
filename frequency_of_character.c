#include<stdio.h>
int main(){
    char s[200];
    int a[128]={0};
    gets(s);
    int i;
    for(i=0;s[i]!='\0';i++)
    a[(int)s[i]]++;
    for(i=1;i<128;i++){
        if(a[i]!=0)
        printf("%c is present %d times\n",i,a[i]);
    }
    return 0;
}