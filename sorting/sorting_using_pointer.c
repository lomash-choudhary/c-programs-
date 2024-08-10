#include<stdio.h>
#include<stdlib.h>
void sort(int *,int );
int main(){
    int n,i;
    int *p;
    printf("enter the limit of the loop");
    scanf("%d",&n);
    p = (int*) malloc(n*sizeof(int));
    printf("enter the elements in the array");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    sort(p,n);
}
void sort(int *p,int n){
    int t,i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(*(p+j)>*(p+j+1)){
                t = *(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=t;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",*(p+i));
    }
}