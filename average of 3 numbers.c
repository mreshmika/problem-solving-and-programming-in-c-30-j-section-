#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("enter the three numbers:");
    scanf("%f %f %f",&a,&b,&c);
    d=(a+b+c)/3;
    printf("the average of %f,%f and %f is %f",a,b,c,d);
    return 0;
}
