#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int front =0 , rear= 0;
int que [SIZE];

void main()
{
 void insertq (int);
 int deleteq ();
 int searchq (int);
 int data,opt,ans;

do
 {
 printf ("\n 1.Insert \n");
 printf ("2.Delete\n");
 printf ("3.Search\n");
 printf ("4.Exit\n");
 scanf("%d",&opt);
 
 switch (opt)
  {
 case 1: printf ("Data :");
 scanf("%d",&data);
 insertq(data);
 break;
 
 case 2 : printf ("Deleted data :%d",deleteq());
 break;
 
 case 3 : printf ("Search data :");
 scanf("%d",&data);
 ans=searchq(data);
 if (ans==1)
 printf("Found\n");
 else
 printf("Not found \n");
 break;
 
 case 4: exit(0);
  }
 }
 while (1);
}
 void insertq (int item)
{
	int trear=rear;
	trear=(trear+1)%SIZE;
	if (trear==front)
	printf ("Queue is full\n");
	else
	{
	rear=trear;
	que[rear]=item;
	}
        return;
}
int deleteq()
{
  if (front==rear)
  {
   printf("Queue is empty\n");
   exit(1);
   }
   front=(front+1)%SIZE;
   return que[front];
   }
int searchq (int item)
  {
  int t_front;
  t_front = (front + 1)%SIZE;
  while
  (t_front!=rear&&que[t_front]!=item)
  if
  (que[t_front]==item)
  return 1;
  else
  return 0;
}
