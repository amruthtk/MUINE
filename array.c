#include<stdio.h>

void read_array (int [],int);
void print_array (int [],int);
void sort_array (int [],int);
void merge_array (int [],int,int[],int,int []);
int main()
{
int n1,n2;
int ar1[20],ar2[20],ar3[40];

printf ("No. of element in I array [1-20]: \n");
scanf ("%d",&n1);

printf ("Enter %d Numbers: \n", n1);
read_array (ar1 , n1);

printf("Number of Elemenmts in II array : \n");
scanf ("%d",&n2);

printf("Enter %d Numbers:  \n",n2);
read_array (ar2,n2);

sort_array (ar1,n1);
sort_array (ar2,n2);

merge_array (ar1,n1,ar2,n2,ar3);

printf("I Array sorted \n");
print_array (ar1,n1);

printf("II Array sorted \n");
print_array (ar2,n2);

printf("Merged Array: \n");
print_array (ar3,n1+n2);

return 0; 
}

