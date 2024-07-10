#include<stdio.h>
int main()
{

  int Maths,Phy,Chem;
  printf("Input the marks of Physics:");
  scanf("%d",&Phy);
  printf("\nInput the marks OF Mathematics:");
  scanf("%d",&Maths);
  printf("\nInput the marks OF Chemistry:");
  scanf("%d",&Chem);

  if(Maths>=65 && Phy>=55 && Chem>=50 && (Maths+Phy+Chem)>=190)
    printf("The candidate is eligible for admission\n");
    else if(Maths+Phy>=140)
    printf("The candidate is eligible for admission\n");
    else
    printf("The candidate is not eligible for admission\n" );

}
