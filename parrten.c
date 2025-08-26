#include <stdio.h>

int main(){
       
        int num;
        printf("enter num:");
        scanf("%d",&num);
        for (int i = 1; i<=num; i++)
        {
              for (int k= 0; k < i; k++)
              {
                  printf("*");
                /* code */
              }
              
               printf("\n");
        }
        

      return 0;
}