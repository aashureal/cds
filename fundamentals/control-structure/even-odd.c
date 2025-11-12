#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integrer: ");
    scanf("%d", &number);

    if (number > 0)
    {

        if (number % 2 == 0)
        {
            printf("The numbe is even.\n");
        }
        else
        {
            printf("The number is odd.\n");
        }
    }
    else
    {
        printf("The number is negative.\n");
    }
}