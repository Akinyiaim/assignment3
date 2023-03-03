/*program that calculates the area of a rectangle*/
#include<stdio.h>
int main()
{
    float area, length, width;
    printf("\nEnter length\n");
    scanf("%f",&length);
    printf("\nEnter width\n");
    scanf("%f",&width);
    area=length*width;
    printf("%1f%1f%1f",length,width,area);
    return 0;
}
