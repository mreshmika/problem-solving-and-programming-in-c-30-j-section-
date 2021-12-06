#include<stdio.h>
int main(){
    int c,d,i;
    float a,b,e,f,g,h;
    printf("enter the values of a b c d");
    scanf("%f %f %d %d",&a,&b,&c,&d);
    e=a+b;
    printf("\naddition of %f and %f is %f",a,b,e);
    if (a>b)
    {
        f=a-b;
    }
        else
      {
          f=b-a;
}
printf("\nthe difference between %f and %f is %f",a,b,f);
g=a*b;
printf("\nthe multiplication of %f and %f is %f",a,b,g);
h=a/b;
printf("\ndivision of %f by %f is %f",a,b,h);
i=c%d;
printf("\nthe remainder when %d is divided by %d is %d",c,d,i);
}
