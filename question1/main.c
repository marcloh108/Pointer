#include <stdio.h>

int main()
{
    int fno, sno, *ptr, *qtr, sum;

    printf("\n\nPointer : Add two numbers :\n");
    printf("---------------------------------\n");

    printf(" Input the first number : ");
    scanf("%d" , &fno);
    printf(" Input the second number : ");
    scanf("%d", &sno);

    ptr = &fno;
    qtr = &sno;

    sum = *ptr + *qtr;

    printf(" The sum of the external numbers is %d\n\n", sum);

    return 0;
}
