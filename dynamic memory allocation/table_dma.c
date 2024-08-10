#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,r,i;
    int *k;
    printf("enter the limit till where you want to print the table");
    scanf("%d",&n);
    k = (int *)malloc(n*sizeof(int));
    printf("enter the number whose table you want to print");
    scanf("%d",&r);
    for(i=0;i<n;i++){
        k[i]=r*(i+1);
        printf("%d X %d = %d\n",r,(i+1),k[i]);
    }
    return 0;
}
/*second method*/
#include<stdio.h>
#include<stdlib.h>
int *var(int );
void table(int *,int);
int main(){
    int n;
    int *k;
    printf("enter the limit till where you want to print the table");
    scanf("%d",&n);
    k = var(n);
    if(k==NULL){
        printf("memory is not allocated");
        return 1;
    }
    table(k,n);
    free(k);
}
int *var(int n){
    int *t;
    t = (int *)malloc(n*sizeof(int));
    return(t);
}
void table(int *k,int m){
    int n,i;
    printf("enter the number whose table you want to print");
    scanf("%d",&n);
    for(i=0;i<m;i++){
        k[i]= n*(i+1);
        printf("%d X %d = %d\n",n,(i+1),k[i]);
    }
}