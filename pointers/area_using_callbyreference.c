#include<stdio.h>
float area(float *,float *,float r);
int main(){
    float r,c,arr;
    printf("enter the radius of the circle");
    scanf("%f",&r);
    area(&arr,&c,r);
    printf("area of the circle is = %f",arr);
    printf("circumference of the circle is = %f",c);
    return 0;
}
float area(float *arr,float *c,float r){
    *arr = 3.14*r*r;
    *c=2*3.14*r;
}
