#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b & a>c)
    {
        printf("%d is largest",a);
    }
    else if (b>a & b>c)
    {
        printf("%d is largest",b);
    }
    else (c>a &c>b);
    {
        printf("%d is largest",c);
    }
    return 0;
}
