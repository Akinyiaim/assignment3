#include<stdio.h>

int main() {
   char name[50];
   float programming, maths, os, average;
   int grade;

   printf("Enter the student's name: ");
   scanf("%s", name);

   printf("Enter the marks of %s in programming: ", name);
   scanf("%f", &programming);

   printf("Enter the marks of %s in maths: ", name);
   scanf("%f", &maths);

   printf("Enter the marks of %s in o/s: ", name);
   scanf("%f", &os);

   average = (programming + maths + os) / 3;
   printf("Average marks of %s is: %.2f\n", name, average);

   if(average < 40) {
      grade = 7;
      printf("Grade: %d (Fail)\n", grade);
   } else if(average >= 40 && average < 60) {
      grade = 5;
      printf("Grade: %d (Pass)\n", grade);
   } else if(average >= 60 && average < 80) {
      grade = 3;
      printf("Grade: %d (Credit)\n", grade);
   } else {
      grade = 1;
      printf("Grade: %d (Distinction)\n", grade);
   }

   return 0;
}
