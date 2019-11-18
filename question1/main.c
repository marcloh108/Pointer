#include <stdio.h>
void swapNumbers(int *x, int *y, int *z);

void swapNumbers(int *x, int *y, int *z)
{
    int tmp;
    tmp = *y;
    *y = *x;
    *x = *z;
    *z = tmp;
}


int main()
{
   int e1, e2, e3;
   printf("Input the value of 1st element : ");
   scanf("%d", &e1);
   printf("Input the value of 2nd element : ");
   scanf("%d", &e2);
   printf("Input the value of 3rd element : ");
   scanf("%d", &e3);

   printf("\n The value before swaping are : \n");
   printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n", e1,e2,e3);
   swapNumbers(&e1, &e2, &e3);
   printf("\n The value after swapping are : \n");
   printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n", e1,e2,e3);
   return 0;

}
