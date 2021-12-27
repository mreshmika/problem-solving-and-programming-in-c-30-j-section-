#include <stdio.h>
void add();
void sub();
void mul();
void divi();
void main()
{
    printf("function calling myself");
    add();
    sub();
    mul();
    divi();
}
void add()
{
    float a,b,c;
    printf("enter the value of a and b:");
    scanf("%f %f",&a,&b);
    c=a+b;
    printf("the addition of %f nd %f is %f",a,b,c);
}
void sub()
{
    float a,b,c;
    printf("enter the value of a and b:");
    scanf("%f %f",&a,&b);
    c=a-b;
    printf("the difference of %f nd %f is %f",a,b,c);
}
void mul()
{
    float a,b,c;
    printf("enter the value of a and b:");
    scanf("%f %f",&a,&b);
    c=a*b;
    printf("the multiplication of %f nd %f is %f",a,b,c);
}
void divi()
{
    float a,b,c;
    printf("enter the value of a and b:");
    scanf("%f %f",&a,&b);
    c=a/b;
    printf("the division of %f by %f is %f",a,b,c);
}
