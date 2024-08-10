#include<stdio.h>
int main()
{
    int f, t=1,y,i;
    char s[10];
    printf("enter the string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    y = i-1;
    for(f=0;f<=y;f++)
    {
        if(s[f]!=s[y])
        t=0;
        break;
        y--;
    }
    if(t==1)
    {
        printf("strig is palindrone");
    }
    else
    {
        printf("strig is not palindrone");
    } 
    return 0;  
 }