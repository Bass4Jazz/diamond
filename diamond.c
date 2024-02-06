#include<stdio.h>

int abs_neg(int num)
{
   if(num < 0)
      num *= -1;
   return num;
}

int main(void)
{
   int height = 9;
   int fn_spases = height / 2;
   int sn_spases = height - 2;
   int crutch = sn_spases - 1;

   for(int i = 1; i <= height; i++)
   {
      for(int j = abs_neg(fn_spases); j > 0; j--)
         printf(" ");
      printf("*");
      fn_spases--;
      
      if(i > 1 && i < height)
      {
         for(int k = 1; k <= sn_spases - abs_neg(crutch); k++)
            printf(" ");
	 printf("*");
	 crutch -= 2;
      }
      
      printf("\n");
   }

   return 0;
}
