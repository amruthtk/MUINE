#include <stdio.h>
void main()
{
 
 int amount,years,i;
 float rate, interest,total_amount;
 
 printf("Enter amount");
 scanf("%d",&amount);
 
 printf("Interest rate");
 scanf("%f",&rate);
 
 printf("years");
 scanf("%d",&years);
 
 total_amount=amount;
 
 for (i=1;i<=years;i++)
 {
  interest=total_amount*rate/100;
  total_amount = total_amount + interest;
  printf("%d\t %.2f\t %.2f\n", i,interest,total_amount);
 }
}  
