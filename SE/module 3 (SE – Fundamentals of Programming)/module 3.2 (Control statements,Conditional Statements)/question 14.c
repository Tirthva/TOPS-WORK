#include <stdio.h>

int main() {

  double n1, n2, n3;

  printf("Enter 1st numbers: ");
  scanf("%lf", &n1);
   
   printf("Enter 2nd numbers: ");
  scanf("%lf",&n2);
  
  printf("Enter 3nd numbers: ");
  scanf("%lf",&n3);
   
   
  if (n1 >= n2) {

    if (n1 >= n3)
      printf("%.2lf is the largest number.", n1);
    else
      printf("%.2lf is the largest number.", n3);
  }

  else {

    if (n2 >= n3)
      printf("%.2lf is the largest number.", n2);
    else
      printf("%.2lf is the largest number.", n3);
  }

  return 0;
}
