// Half Pyramid of *

#include <stdio.h>
int main() 
{
   int i, j, rows;
   printf("\n Enter the number of rows: ");
   scanf("%d", &rows);
   
   for (i = 1; i <= rows; ++i) 
   {     //   
      for (j = 1; j <= i; ++j) 
	  {     //   
         printf("\t * ");                 // *    // **  //***
      }
      printf("\n");
   }
   return 0;
}