#include <stdio.h>

int main()
{
   int num = 0;

loop:
   printf("%d\n", num);
   num++;
   if (num != 90)
   {
      goto loop;
      /* code */
   }
   return 0;
}