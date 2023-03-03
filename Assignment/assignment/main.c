#include <stdio.h>

int main()
{
    char lowercase, uppercase;

    printf("enter a lowercase character:");
    scanf("%c", &lowercase);

    //convert the lowercase character to uppercase
    uppercase = lowercase - 32;

    printf("The uppercase equivalent is %c\n",uppercase);

    return 0;
}
