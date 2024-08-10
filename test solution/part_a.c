/*question 1*/

// #include<stdio.h>
// #include<string.h>
// struct employee{
//     char name[50];
//     int salary;
// };
// void main(){
//     struct employee e1;
//     printf("enter the employee name");
//     scanf("%s",e1.name);
//     printf("\n%s",e1.name);
// }

/*question 2*/

// #include<stdio.h>
// int main(){
// typedef char* Mohan;
// Mohan myName="ABCDEFG";
// printf("myName=%s(size=%d)",myName,sizeof(myName));
// }   

/*question 3*/

// #include<stdio.h>
// int i =3;
// int main(){
//     char a[100];
//     a[0]='B';
//     a[1]='B';
//     a[2]='C';
//     a[3]='E';
//     fun(&a[0]);
//     printf("%c",*(a+i));
//     return 0;
// }
// void fun(char *a){
//     a++;
//     printf("%c",*a);
//     a++;
//     *a++;
//     i-=2;
// }

/*question 4*/

// #include<stdio.h>
// struct temp{
//     int a;
// }s;
// void change(struct temp);
// int main(){
//     s.a=10;
//     changes(s);
//     printf("%d\n",s.a);
// }
// void changes(struct temp s){
//     s.a=1;
// }

/*question 5*/

// #include<stdio.h>
// struct temp{
//     int a;
// }s;
// void fun(struct temp *ss){
//     ss->a=50;
//     s.a=10;
//     printf("%d\t",ss->a);
// }
// void main(){
//     fun(&s);
//     printf("%d\t",s.a);
// }

/*question 6*/

// #include<stdio.h>
// int fun(char *str1){
//     char *str2 = str1; 
//     while(*++str1);
//     return(str1-str2);
// }
// int main(){
//     char *str="GANGA Ram";
//     printf("%d",fun(str));
//     return 0;
// }

/*question 8*/

// #include<stdio.h>
// int main(){
//     char str[]="%d%c";
//     char arr[]="Global Technology";
//     printf(str,0[arr],2[arr+3]);
//     return 0;
// }

/*question 9*/

// #include<stdio.h>
// char str1[100];
// char *fun(char str[]){
//     static int i =0;
//     if(*str){
//         fun(str+1);
//         str1[i]=*str;
//         i++;
//     }
//     return str1;
// }
// int main(){
//     char str[]="EXAM 2024 Global";
//     printf("%s",fun(str));
//     return 0;
// }

/*question 10*/

#include<stdio.h>
int main(){
    char s1[7]="1234",*p;
    p=s1+2;
    *p=0;
    p++;
    (*p)++;
    printf("%s",s1);
    printf("\n%s",p);
}