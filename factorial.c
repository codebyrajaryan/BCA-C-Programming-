#include <stdio.h>

int main() {
    int n;
    int fact = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) 
        printf("Error: Factorial is not defined for negative numbers.\n");
     else 
{
        for (int i = n; i >= 1; --i) {
            fact=fact*i;
        }
         fact=fact;
        printf("Factorial = %d", fact);
    }

    return 0;
}
