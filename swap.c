// swaping of two numbers

#include <stdio.h>

int main() {
   int a, b, temp;
   
   printf("Enter value of a: ");
   scanf("%d", &a);
   
   printf("Enter value of b: ");
   scanf("%d", &b);
   
   temp = a;
   a = b;
   b = temp;
   
   printf("\nAfter swapping:\n");
   printf("a = %d\n", a);
   printf("b = %d\n", b);
   
   return 0;
}
