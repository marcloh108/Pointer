#include <stdio.h>
int main()
{
    long fno, sno;

    printf("\n\nPointer : Find the maximum number between two numbers\n");
    printf("------------------------------------------------------\n");

    printf(" Input the first number : ");
    scanf("%ld" , &fno);
    printf(" Input the second number : ");
    scanf("%ld", &sno);

    if ( fno > sno)
    {
        printf("%ld is the maximum number", fno);
    }
    else
        printf("%ld is the maximum number", sno);
    return 0;
}
