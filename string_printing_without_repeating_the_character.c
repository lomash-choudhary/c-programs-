#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter the string");
    scanf("%s",str);
    int i,j,r;
    for(i=0;str[i]!='\0';i++){
        r=1;
        for(j=0;j<i;j++){
            if(str[j]==str[i]){
                r=0;
                break;
            }
        }
        if(r==1)
        printf("%c",str[i]);
    }
}