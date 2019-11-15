#include <stdio.h>

int main()
{
    int* ab;
    int m;
    m = 29;

    printf("\n\n Pointer : How to handle the pointers in the program :\n");
    printf("----------------------------------------------------------------\n");
    printf(" Here is the declaration ab = int pointer, int m= 29");
    printf("\n\n Address of m : %p\n",  &m); // z is a pointer so %p would print the address
    printf("Value of m :%d\n",   m);
    ab=&m;
    printf("\n\n Now ab is assigned with address of m.\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n", *ab);
    m = 34;
    printf("\nThe value of m assigned to 34 now.\n");
    printf("Address of pointer ab : %p\n",ab);
    printf("Content of pointer ab : %d\n\n", *ab);
    *ab=7;
    printf("The pointer variable ab is assigned the value 7 now.\n");
    printf("Address of m : %p\n", &m);

    printf("Value of m : %d\n\n", m);
    return 0;
}
