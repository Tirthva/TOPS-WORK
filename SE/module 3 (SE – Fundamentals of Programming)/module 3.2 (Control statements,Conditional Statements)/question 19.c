#include <stdio.h> 
#include <string.h>  

void main()
{
    int custid, conuint;  // customer ID and consumed units
    float charge, surchg = 0, gamount, netamount;  //  charge, surcharge, gross amount, and net amount
    char connm[25];  //  customer name.

    printf("Input Customer ID :");  
    scanf("%d", &custid);  
    printf("Input the name of the customer :");  
    scanf("%s", connm);  
    printf("Input the unit use by the customer : ");  
    scanf("%d", &conuint);  

    if (conuint <= 350)
        charge = 1.20;  
    else if (conuint >= 350 && conuint < 600)
        charge = 1.50;  
    else if (conuint>= 600 && conuint < 800)
        charge = 1.80;  
    else
       charge = 2.00;  

    gamount = conuint * charge;  

    if ( gamount > 350)
        surchg =  gamount * 18 / 256; 

    netamount =  gamount + surchg;  

    if (netamount < 256)
        netamount = 256;  

    printf("\nElectricity Bill\n");
    printf("Customer IDNO :%d\n", custid);
    printf("Customer Name :%s\n", connm);
    printf("unit Consumed :%d\n", conuint);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n", charge,  gamount);
    printf("Surchage Amount :%8.2f\n", surchg);
    printf("Net Amount Paid By the Customer     :%8.2f\n", netamount);
}  

