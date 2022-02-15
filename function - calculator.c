#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y)
{
    int result;

    result = x+y;

    return result;
}

int sub(int x,int y)
{
    int result;

    result = x-y;

    return result;
}

float divi(int x, int y)
{
       int result;

       result = x / y;

       return result;
}

int mult(int x, int y)
{
        int result;

        result = x * y;

        return result;
}

int main()
{
    int num1, num2;

    printf("Please enter 2 numbers you want to calculate:\n");
    scanf("%d\n%d",&num1,&num2);

    printf("Their sum is: %d\n",sum(num1,num2));
    printf("Their substraction is: %d\n",sub(num1,num2));
    printf("Their division is: %lf\n",divi(num1,num2));
    printf("Their multiplication is: %d\n",mult(num1,num2));

    return 0;
}
