#include<stdio.h>
void prime(int g){
    if(g==0|| g==1){
        return;
    }
    int c=0,i;
    for(i=1;i<=g;i++){
        if(g%i==0){
            c++;
        }
    }
        if(c==2){
            printf("%d number is prime",g);
        }
        c=0;
}
int main(){
        int n,a,i;
        printf("enter the range from where to where you wanna print prime numbers\n");
        scanf("%d%d",&a,&n);
        for(i=a;i<=n;i++){
            prime(i);
        }
}