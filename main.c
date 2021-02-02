#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int arraySize, input;
    int sum = 0;

    printf("how many elements? \n");
    scanf("%d", &arraySize);
    printf("the array size is: %d \n", arraySize);

    int array[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        printf("Now input the value for element %d \n", i + 1);
        scanf("%d", &input);
        sum += input;
    }

    printf("--------------------\n");
    printf("The final sum is: %d", sum);

    return 0;
}
