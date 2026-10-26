#include <stdio.h>
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
  
int main()
{ 
    int n, result;
    printf("Enter a number: ");     
    scanf("%d", &n);
 
    if (n < 0)
    {
        printf("factorial not defined for negative numbers.");
    }
    else 
    {
        result = factorial(n);
        printf("factorial = %d", result);
    }

    return 0;
}


