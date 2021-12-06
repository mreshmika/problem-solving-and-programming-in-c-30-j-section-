#include <stdio.h>

int main()
{
    int i,n;
   i=1;
    printf("enter n value");
    scanf("%d",&n);
    for(i;i<=20;i++)
    {
        printf("\n%d * %d =%d",n,i,n*i);
    }
   return 0;
}
