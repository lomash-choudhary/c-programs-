#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("enter the amount of number between which you want to find the greatest");
    scanf("%d",&n);
    int *k;
    k = (int *)malloc(n*sizeof(int));
    if(k==NULL){
        printf("memory is not allocated");
        return 0;
    }
    else{
        printf("enter the numbers");
        for(i=0;i<n;i++){
            scanf("%d",&k[i]);
        }
        int g = k[0];
        for(i=0;i<n;i++){
            if (k[i]>g)
            {
                g = k[i];
            }            
        }
        printf("%d is greatest ",g);
    }
    free(k);
    return 0;
}