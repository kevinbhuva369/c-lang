#include <stdio.h>

int main()
{
      int number, g = 90, play_exit;
      printf("YOU PLAY GAME OR NOT\n");
      printf("IF PALY ENTER:0 ELSE ENTER:");
      scanf("%d", &play_exit);
      if (play_exit == 0)
      {
            printf("YOU   NOT INSTRETED IN GAME\n");
            printf("TNX\n");
      }

      else if (play_exit == 1)
      {
            printf("YOU INTERETED IN GAME TNX\n");

            for (int i = 1; 1; i++)
            {

                  if (number == g)
                  {
                        printf("you win and gass numis:%d tryis:%d", g, i);
                        break;
                  }

                  else if (number != g)
                  {
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
      }
      return 0;
}
