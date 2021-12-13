#include <stdio.h>

int main()
{
   int a,b,c;
   printf("enter the values of a and b:");
   scanf("%d %d",&a,&b);
   if (a>b)
   {
       c=a-b;
       }
       else
      {
          c=b-a;
      } printf("the difference between %d and %d is %d",a,b,c);
  return 0;
}
