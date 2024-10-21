#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left*right
};
void main()
{
struct node*root=(struct node*)0://null//Binary serch tree
structnode*insert (struct node*,int);
void display(struct node*);
struct node*search(sruct node*,int);
struct node*delete(struct node*,int);
int opt,data;
do
{
printf("\n 1.Insert \n 2.Search \n 3.Delete \n 4.Display \n 5.Exit\n");
printf("Enter your option :");
scanf("%d",&opt);
switch (opt)
{
case1:printf("Data");
	scanf("%d",&data)
	root-insert(root,data);
	break;
	
case2:printf("Data");
	scanf("%d",&data)
	if
		(search(root,data)==0)
		printf("Not found \n");
	else
		printf("Found")
		break;
	
case3:printf("data");
	scanf("%d",&data);
	root=delete(root,data);
	break;

case4:display(root);
break;

case5:exit(0)
}
while(1);
}
//display BST contents-inorder
void display(struct node*bst)
{
if(bst!=(strct node*)0)
	{
		if(bst==t)//root is to be removed)
		if(bst->left==0)
		bst=bst->right;
	 else
	 	bst=bst->left;
	 	//not a root note
	 	
	 elseif
	 	(t1->left=0 && t1->right==0)
	 	//case of child
	 if(t2->left==t1)
	 t2->left=0;
	 else
	 t2->right=0;
	 else t2			

























binaryvask
