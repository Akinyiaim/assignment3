#include<stdio.h>

int main() {
   char color;

   printf("Enter the color of the traffic light (R/Y/G): ");
   scanf(" %c", &color);

   switch(color) {
      case 'R':
      case 'r':
         printf("Stop\n");
         break;
      case 'Y':
      case 'y':
         printf("Get ready\n");
         break;
      case 'G':
      case 'g':
         printf("Move\n");
         break;
      default:
         printf("Invalid input\n");
   }

   return 0;
}
s
