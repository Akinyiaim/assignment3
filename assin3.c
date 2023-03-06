#include <stdio.h>

int main() {
    char name[50];
    int english, maths, science;
    float average;

    // Input student details
    printf("Enter the name of the student: ");
    scanf("%s", name);

    printf("Enter the English mark: ");
    scanf("%d", &english);

    printf("Enter the Maths mark: ");
    scanf("%d", &maths);

    printf("Enter the Science mark: ");
    scanf("%d", &science);

    // Calculate average mark
    average = (english + maths + science) / 3.0;

    // Display student details
    printf("Name: %s\n", name);
    printf("Average mark: %.2f\n", average);

    return 0;
}
