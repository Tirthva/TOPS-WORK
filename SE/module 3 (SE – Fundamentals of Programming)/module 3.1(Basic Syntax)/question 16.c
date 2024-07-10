#include<stdio.h>

int main() {
  
  char fname[20];
  printf("Enter The First Name :");
  scanf("%s", fname);

  
  printf("Abbreviated Name: ");
  
  printf("%c.\n", fname[03]);
  return 0;

}
