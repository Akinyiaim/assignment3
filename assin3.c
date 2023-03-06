#include <stdio.h>

int main() {
    int length, width;

    // Validate user input for length
    do {
        printf("Enter the length of the rectangle (non-negative): ");
        scanf("%d", &length);
    } while (length < 0);

    // Validate user input for width
    do {
        printf("Enter the width of the rectangle (non-negative): ");
        scanf("%d", &width);
    } while (width < 0);

    // Calculate perimeter and area
    int perimeter = 2 * (length + width);
    int area = length * width;

    // Print results
    printf("The length and width of the rectangle are %d and %d, respectively.\n", length, width);
    printf("The perimeter of the rectangle is %d.\n", perimeter);
    printf("The area of the rectangle is %d.\n", area);

    return 0;
}
