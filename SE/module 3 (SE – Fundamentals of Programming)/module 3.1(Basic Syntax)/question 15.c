#include<stdio.h>

int main() {
  
  char fname[20], mname[20], lname[20];
  printf("Enter The First Name :");
  scanf("%s", fname);
  
   printf("Enter The  Middle Name : ");
  scanf("%s", mname);
  
   printf("Enter The  Last Name : ");
  scanf("%s",  lname);
  
  printf("Abbreviated Name: ");
  
  printf("%c. %c. %s\n", fname[0], mname[0], lname);
  return 0;

}
