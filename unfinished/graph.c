#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
typedef struct 
{
    int data;
    int status;
    struct node *next,*point;

}node;
typedef struct
{int n;
struct topsort *next;
}topsort;
int d[SIZE] , f[SIZE],time;
node * q[10];
int front =0,rear=0; //queue handling pointers
node * g=0 // to store graph
top sort * tsort = 0 //to store topogical sort order

// fn to add vertex
void addvertex (int n)
{
    node * f(node *)malloc(size of (node));
    t->data=n;
    t->point=0
    t->next=g;
    g=t;
}
//fn to find vertex node address of the vertex
node * find (int n)
{node * t=g;
while (t!=0 && t->data !=n)
    t=t -> next;
return t;
}
// fn to add an edge
void addedge (int u,int v)
{
    node *v1,*v2,*t;
    v1= find (u);
    v2= find (v);
    t=(node *)malloc(sizeof(node));
    t->next=v1->point;
    v1->point=t;
    t->point=v2
    return;
}
//fn to print a graph
void print graph()
{ node *t1,*t2,*t3;
printf("\nVertex\tEdge list\n");
t1=g;
while t1!=0
{printf("\n d...\t",t1->data);
t2=t1->point;
while (t2!=0)
{printf("%d,",t3->data);
t2=t2->next;
}
t1=t1->next;
}
}
//inserting nodes in tpological order list at begining
void topsorting (int n)
{top sort *z =(topsort*)malloc(sizeof(topsort));
z->n=n
z->next=tsort;
tsort=z;
}
//printing topological order list
void topsort out()
{while (tsort !=0)
{printf ("%d,",tsort ->n);
tsort=tsort -> next;
}
}
//DFS - VISIT
void dfs_visit (node*u)
{node *t,*t1;
u->status =1; //visit vertex
printf ("%d,", u->data);
++time
d[u -> data]=time; //store discovery time
t=u-> point;
while(t!=0)
{t1=t->point}
if (t1->status == 0) // if not visted
    dfs_visit(t1);
t=t->next;
}
++time;
f[u->data]=time //store finish time
topsorting (u->data); //store the topological sort list
return;
}
//DFS search
void dfs (node * g1)
{node *t=g;
while (t!=0)
{t ->status=0; // set as not visited
t=t-> next;
}
dfs_visit(g1);
}
//Enque operation
void enque (node * s)
{int r1 = rear;
r1 =(r1+1)%SIZE;
if (f==r1)
{print f ("Q full");
exit (1);
}
rear=r1;
q[rear]=s;
}
//emptyq to last q is empty or not
int emptyq()
{if (front==rear)
return 1;
else 
return 0;
}
//deque operation
node*deque()
{if (emptyq())
{printf ("emptyq")
exit (2);
}
front=(front+1)%SIZE;
returnq[front]
}
//BFS