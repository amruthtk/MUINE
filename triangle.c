#include <stdio.h>
int main()
{
 int a, b ,c ,max;
 printf("Enter the sides: \n");
 scanf("%d %d %d", &a, &b, &c);
 
 if (a>b)
 {
 max=a;
 a=b;
 b=max;
 }
 
 if (b>c)
 {
 max=b;
 b=c;
 c=max;
 }
 
 if (a+b>c)
 {
 printf("The triangle can be formed\n");
 
 if (a==b && b==c)
 printf("Equilateral Triangle\n");
 
 else if (a==b||b==c||c==a)
 printf("Isoceles Triangle\n");
 
 if (a*a+b*b==c*c)
 
 {printf("Right Triangle\n");
 }
 }
 else printf("The triangle can't be formed\n"); 
}
