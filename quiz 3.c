#include<stdio.h>

int main() {
   int count, i, n;
   float sum = 0, average;

   printf("Enter the number of integers: ");
   scanf("%d", &n);

   printf("Enter %d integers:\n", n);

   count = 0;
   while(count < n) {
      scanf("%d", &i);
      sum += i;
      count++;
   }

   average = sum / n;
   printf("Average of the numbers: %.2f\n", average);

   return 0;
}
