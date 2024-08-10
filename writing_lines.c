#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,t;
    char *p;
    printf("enter the number of words per line and total number of lines");
    scanf("%d%d",&t,&n);
    p = (char *)calloc(n*t,sizeof(char));
    if(p==NULL){
        printf("memory not allocated");
        exit(0);
    }
    else{
        int i;
        FILE *fp;
        fp = fopen("even.txt","w");
        if(fp==NULL){
            printf("file didn't open");
            exit(0);
        }
        for(i=1;i<=n;i++){
            printf("enter %d line\n",i);
            fgets(p);
            fputs(p,fp);
            puts("\n");
        }
        fclose(fp);
    }
}