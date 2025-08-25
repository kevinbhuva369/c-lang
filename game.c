#include <stdio.h>

int main()
{
      int number, g = 90, try = 0;

      for (int i = 1; i <= 15; i++)
      {

            if (number == g)
            {
                  i = 10;
                  printf("you win and gass numis:%d tryis:%d", g, try);
            }

            else if (number != g)
            {
                  try++;
                  printf("enter num:");
                  scanf("%d", &number);

                  if (try == 10)
                  {
                        printf("you loss");
                  }

                  else if (number <= g)
                  {
                        printf("enetr high numbar");
                        /* code */
                  }
                  else if (number >= g)
                  {
                        printf("enetr min num");
                  }
            }
      }
}