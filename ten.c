#include <stdio.h>
void main()
{
int no [10],i,max;
printf("Enter 10 numbers: ");
for(i=0;i<10;i++)
scanf("%d",&no[i]);
max=no[0];
for(i=1;i<10;i=i++)
if(no[i]>max)
max=no[i];
printf("largest is %d",max);
}
