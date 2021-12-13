#include <stdio.h>
int main()
{
   int x, y, *a, *b,t;
   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
   a = &x;
   b = &y;
   t = *b;
   *b = *a;
   *a = temp;
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
    return 0;
}
