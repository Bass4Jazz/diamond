#include<stdio.h>

int abs_neg(int num)
{
   if(num < 0)
      num *= -1;
   return num;
}

int main(void)
{
   int l = 8, m = 4;

   for(int i = 1; i <= 9; i++)
   {   
      for(int j = 4; j > abs_neg(m); j--)
         printf(" ");
      printf("*");
      m--;
      
      if(i != 5)
      {
         for(int k = abs_neg(l); k > 1; k--)
	    printf(" ");
         printf("*");
      }      
      l = l - 2;

      printf("\n");
   }

   return 0;
}
