#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *marks, sum = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Allocate memory for n floats
    marks = (float*) malloc(n * sizeof(float));

    // Check if memory was allocated
    if (marks == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Take input
    for (i = 0; i < n; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    printf("Average Marks = %.2f\n", sum / n);

    // Free the memory
    free(marks);
    return 0;
}