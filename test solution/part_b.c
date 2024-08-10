/*question 1*/

// #include<stdio.h>
// int main(){
//     int a[4][3]={11,12,13,6,8,22,35,39,7,6,28,15};
//     int *p,*q;
//     int y=0,i;
//     p=&a[1][2];
//     q=&a[3][2];
//     *p=*q+2;
//     ++y;
//     *q=*p+y;
//     ++y;
//     for(i=0;i<=2;i++){
//         (*p)++;
//         (*q)++;
//         a[i][y]+=y*y;
//     }
//     for(i=0;i<4;i=i+2){
//         for(y=0;y<3;y=y+2){
//             printf("HELLO %d\n",a[i][y]);
//         }
//     }
//     printf("PLAY %d\n",*p+*q);
//     return 0;
// }

/*question 2*/

// #include<stdio.h>
// void fun(char *);
// int main(){
//     char a[100]="MOHAN LAL SHARMA";
//     a[0]='A';
//     a[2]='B';
//     a[5]='C';
//     a[7]='D';
//     fun(&a[0]);
//     printf("RED\n %s\n",a);
//     return 0;
// }
// void fun(char *a){
//     a++;
//     a++;
//     while(*a!='R'){
//         (*a)++;
//         a++;
//     }
// }

/*question 3*/

// #include<stdio.h>
// int i=7;
// void main(){
//     int a=4,b=2;
//     char p[]="MOHANLAL YADAV";
//     char m=p[0];
//     while(p[b]!='\0'){
//         for(a=0;p[a]!='\0';a++);
//         a--;
//         if(b>a/2)
//         break;
//         m=p[a];
//         p[a]=p[b];
//         p[b]=m;
//         ++b;
//         printf("\n cat = %c",p[b]);
//     }
//     printf("\n");
//     printf("%s",p);
// }

/*question 4*/

// #include<stdio.h>
// typedef struct xyz{
//     int a;
//     int b;
//     int c;
// }college;
// int main(){
//     college m[3]={{3,4,0},{0,2,8},{6,8,7}};
//     int k=0;
//     for(k=1;k<3;k++){
//         m[k].a=(m[k-1].b+m[k].c)/k;
//         m[k].b=(m[k-1].c+m[k].a)*k;
//         m[k].c=(m[k-1].a+m[k].b)-k;
//     }
//     for(k=0;k<3;k++){
//         printf("\n%d",m[k].a+m[k].b+m[k].c);
//     }
// }

/*question 5*/

#include<stdio.h>
int c=0;
int green(int c){
    int k,y,p=5;
    int d=0;
    for(k=7;k>=3;k--){
        for(y=k;y<=10;y++)
        k%2?c++:printf("%c",65+y);
        k%2?--p:d++;
        printf("\n");
    }
    return(c+d);
}
int main(){
    printf("HELLO %d",green(4)*3+c);
}