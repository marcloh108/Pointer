#include <stdio.h>

int main()
{
    int arr1[10];
    int i, n;
    int *pt;

    printf("Input the number of elements to store in the array (max 10) : ");
    scanf("%d",&n);

    printf("Input %d number of elements in the array : \n", n);
    for(i=0;i<n;i++)
    {
        printf("element - %d : ", i+1);
        scanf("%d", &arr1[i]);
        pt++;
    }

    pt = &arr1[n-1];

    printf("\n The elements of array in reverse order are :");

    for(i = n; i > 0; i--)
    {
        printf("\n element - %d : %d ", i, *pt);
        pt--;
    }
    printf("\n\n");
}
