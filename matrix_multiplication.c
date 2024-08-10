#include<stdio.h>
#define max 50
int main(){
    int arows,acolumn,brows,bcolumn,s=0,i,j,k;
    int a[max][max],b[max][max],c[max][max];
    printf("enter the rows and column of the matrix 1st\n");
    scanf("%d%d",&arows,&acolumn);
    printf("enter the elements in the matrix 1st\n");
    for(i=0;i<arows;i++){
        for(j=0;j<acolumn;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the rows and column of the matrix 2nd\n");
    scanf("%d%d",&brows,&bcolumn);
    if(acolumn!=brows){
        printf("cannnot multiply\n");
    }
    else{
    printf("enter the elements in the matrix 2nd\n");
    for(i=0;i<brows;i++){
        for(j=0;j<bcolumn;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<arows;i++){
        for(j=0;j<bcolumn;j++){
            for(k=0;k<brows;k++){
                s+=a[i][k]*b[k][j]; 
            }
            c[i][j]=s;
            s=0;
        }
    }
    printf("multiplication of matrix is\n");
    for(i=0;i<arows;i++){
        for(j=0;j<bcolumn;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    }
}