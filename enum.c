#include<stdio.h>
enum week{
    MON,TUE,WED,THRU,FRI,SAT,SUN
};
int main(){
    enum week today;
    today = WED;
    printf("today is %d ",today+1);
}
