#include <stdio.h>
int* findLarger(int *num1, int *num2);

int* findLarger(int *num1,int *num2)
{
    if(*num1 > *num2)
    return num1;
    else
    return num2;
}
int main()
{
    int num1, num2;
    int *result;
    printf("Input the first number : ");
    scanf("%d", &num1);
    printf("Input the second number : ");
    scanf("%d", &num2);
    result=findLarger(&num1,&num2);
            printf("The number %d is larger. ", *result);

}
