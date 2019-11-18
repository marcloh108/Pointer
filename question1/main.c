#include <stdio.h>

long addTwonumbers(long *n1, long *n2)
{
    long sum;
    sum = *n1 + *n2;
    return sum;
}
int main()
{
    long fno, sno, *ptr, *qtr, sum;

    printf("\n\nPointer : Add two numbers using call by reference:\n");
    printf("------------------------------------------------------\n");

    printf(" Input the first number : ");
    scanf("%ld" , &fno);
    printf(" Input the second number : ");
    scanf("%ld", &sno);
    sum = addTwonumbers(&fno, &sno);
    printf(" The sum of %ld and %ld is %ld\n\n", fno, sno, sum);
    return 0;
}
