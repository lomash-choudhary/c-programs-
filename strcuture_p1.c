/*read roll no name and marks of  6 students and print deatil of topper*/
#include<stdio.h>
struct student
{
    int rn;
    char nm[100];
    int tm;
};
int main(){
    int i,m,k;
    struct student s[3];
    for(i=0;i<3;i++){
        printf("enter the roll no ,name and marks of %dst student",i+1);
        scanf("%d%s%d",&s[i].rn,&s[i].nm,&s[i].tm);
    }
    m = s[0].tm;
    for(i=0;i<3;i++){
        if(s[i].tm>m){
           m = s[i].tm;
           k = i;
        }
    }
    printf("name of topper is %s,roll no is %d,total marks is %d",s[k].nm,s[k].rn,s[k].tm);
    
}
 