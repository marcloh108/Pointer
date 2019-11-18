#include <stdio.h>
void Factorial(int n, int *f);

void Factorial(int n, int *f)
{
    int i;
    *f = 1;
    for(i=1;i<=n;i++)
        *f=*f*i;
}


int main()
{
    int fact;
    int num1;
    printf("Input a number : ");
    scanf("%d", &num1);

    Factorial(num1, &fact);
    printf("The factorial of %d is : %d \n\n",num1,fact);
   return 0;

}
