#include <stdio.h>

int main()
{
      int number, g = 90, try = 0;

      for (int i = 0; 1; i)
      {

            if (number == g)
            {
                  printf("you win and gass numis:%d tryis:%d", g, try);
                  break;
            }

            else if (number != g)
            {
                  try++;
                  printf("enter num:");
                  scanf("%d", &number);

                  if (number < g)
                  {
                        printf("enetr high numbar");
                        /* code */
                  }
                  else if (number > g)
                  {
                        printf("enetr min num");
                  }
            }
      }
      return 0;
}