#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int array[10];
    int i, numb, sum = 0;

    for(i = 0; i < 10; i++) {
        printf("Enter a number: ");
        scanf("%i", &numb);
        array[i] = numb;
    }

    for(i = 0; i < 10; i++) {
        sum = sum + array[i];
    }

    printf("Here is the final sum: %i\n", sum);

    return 0;
}
