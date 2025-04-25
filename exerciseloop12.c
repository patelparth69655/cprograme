/*    *
     * *
    * * * 
   * * * *
  * * * * *
   * * * *
    * * * 
     * *
      *
*/


#include<stdio.h>
void main ()

{
    int a = 1;
    for(int row = 5; row>=1; row--)
      {
        for(int coloum = row; coloum >= 1; coloum--)
        {
            printf(" ");
        }
        for(int coloum1 = 1; coloum1 <= a; coloum1++)
        {
            printf(" *");
        }
        printf("\n");
         a++;
      }

    int a1 = 2;
    for(int row = 4; row >= 1; row--)// outerloop
      {
        for(int coloum = 1; coloum <= a1; coloum++)
        {
            printf(" ");
        }
        for(int coloum1 = row; coloum1 >= 1; coloum1--)
        {
            printf(" *");
        }
        printf("\n");
         a1++;
      }
}