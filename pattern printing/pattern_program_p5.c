#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=4;i++){
        if(i<4){
            for(j=1;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(k=4;k>=1;k--){
                for(j=1;j<=k;j++){
                    printf("*");
                }
                printf("\n");
            }
        }
    }
}