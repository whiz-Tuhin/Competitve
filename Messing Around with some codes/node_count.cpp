#include<stdio.h>
#include<stdlib.h>

int step=0;
typedef struct node
{
int data;
struct node *left, *right;
}NODE;



int max(int a, int b)
{
 
  int res = (a>b)?a:b;
  return res;
   
} 
NODE* insert(NODE* root)
{
	int item1,item2;	
	printf("\n what do you want the left child of %d:",root->data);
	scanf("%d",&item1);
	NODE* temp1 = (NODE*)malloc(sizeof(NODE));
    	temp1->left = temp1->right = NULL;
    	temp1->data = item1;
	if(item1==-1)
		root->left=NULL;
	else
	{ 
    		root->left=temp1;
		temp1=insert(temp1);
	}	
	printf("\n what do you want the right child of %d:",root->data);
	scanf("%d",&item2);
	NODE* temp2 = (NODE*)malloc(sizeof(NODE));
    	temp2->left = temp2->right = NULL;
    	temp2->data = item2;
	if(item2==-1)
		root->right=NULL;
	else
	{
		root->right=temp2; 
		temp2=insert(temp2);
	}	
	return root;
	
}
int count_node(NODE* root) {
  
    if(root == NULL)
	{
	step++;
        return 0;
	}
    else 
       {
        if(root->left == NULL && root->right == NULL)
        {
         step++;
         return 1;
        }
        
        else
         return count_node(root->left) + count_node(root->right) + 1;    
       }
}

int main()
{
NODE* root=(NODE*)malloc(sizeof(NODE));
printf("enter the value of root's data\n");
scanf("%d",&root->data);
insert(root);
int d=count_node(root);
printf("count of nodes is: %d",d);
printf("\nstep count =%d:\n",step);

return 0;	
}

