// BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR
// DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
// INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE
// UNIVERSITY’S ACADEMIC INTEGRITY POLICY.

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
