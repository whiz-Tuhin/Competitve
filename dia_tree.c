n#include <stdio.h>
#include <stdlib.h>

int arr[100];

typedef struct node
{
  int data;
  struct node* lchild;
  struct node* rchild;
}NODE;

int max(int a ,int b)
{
 int res = (a>b)?a:b;
 return res;
}

int height(NODE* root)
{
  if(root == NULL)
   return 0;
  else 
   return 1 + max(height(root->lchild),height(root->rchild));
}

int diameter(NODE* root)
{
  if(root == NULL)
   return 0;
  
  int lheight = height(root->lchild);
  int rheight = height(root->rchild);
  
  int ldia = diameter(root->lchild);
  int rdia = diameter(root->rchild);
  
  int a = max(ldia,rdia);
  int b = lheight + rheight + 1;
  
  int res = max(a,b);
  return res;
}


void preorder(NODE* root)
{
 if(root!=NULL)
 {
   printf("%d\t",root->data);
   preorder(root->lchild);
   preorder(root->rchild);
 }
}

void postorder(NODE* root)
{
 if(root!=NULL)
 {
  postorder(root->lchild);
  postorder(root->rchild);
  printf("%d\t",root->data);
 }
}

void inorder(NODE* root)
{
  static int i = 0;
  if(root!=NULL)
  {
    inorder(root->lchild);
    printf("%d\t",root->data);
    arr[i] = root->data;
    i++;
    inorder(root->rchild);
  }
}

int search(int array[],int size,int key)
{
  int flag = 0;
  int i =0;
  for(i =0;i<size;i++)
  {
    if(array[i] == key)
    { 
      flag = 1;
      break;
    }
  }
  
  if(flag==1)
  return 1;
  
  else 
  return 0;
}

NODE* insert(NODE* root)
{
	int item1,item2;	
	printf("\n What do you want at the left child of %d ?? \n",root->data);
	scanf("%d",&item1);
	NODE* temp1 = (NODE*)malloc(sizeof(NODE));
    	temp1->lchild = temp1->rchild = NULL;
    	temp1->data = item1;
	if(item1==-1)
		root->lchild=NULL;
	else
	{ 
		root->lchild=temp1;
		temp1=insert(temp1);
	}	
	printf("\n What do you want at the right child of %d ?? \n",root->data);
	scanf("%d",&item2);
	NODE* temp2 = (NODE*)malloc(sizeof(NODE));
    	temp2->lchild = temp2->rchild = NULL;
    	temp2->data = item2;
	if(item2==-1)
		root->rchild=NULL;
	else
	{
		root->rchild=temp2; 
		temp2=insert(temp2);
	}	
	return root;
	
}

int main()
{
  int data2;
  NODE* root = (NODE*)malloc(sizeof(NODE));
  printf("enter the root's data\n");
  scanf("%d",&data2);
  root->data = data2;
  int data,choice,found,x;
  int key;
  while(1)
  {
  printf("\nEnter a choice\n");
  printf("1.)Insert\n2.)Search element\n3.)Inorder traversal\n4.)preorder traversal\n5.)postorder traversal\n6.)Calculate Diameter\n7.)Exit\n");
  scanf("%d",&choice);
  
  switch(choice)
  {
    case 1:
      // printf("enter the data to be inserted\n");
       //scanf("%d",&data);
       root = insert(root);
       break;
       
    case 2:
         printf("Enter the key to be searched\n");
         scanf("%d",&key);
         int n = sizeof(arr)/sizeof(arr[0]);
         found = search(arr,n,key);
         if(found==0)
         root = insert(root);
         else 
         printf("element found\n");
         break;
          
    case 3:
       printf("the inorder traversal is\n");
       inorder(root);
       break;
     
    case 4:
       printf("the preorder traversal is\n");
       preorder(root);
       break;
       
    case 5:
       printf("the postorder travesal is\n");
       postorder(root);
       break;
    
    case 6:
       x = diameter(root);
       printf("the diameter of the tree is %d\n",x);
       break;
    
    case 7:
       printf("exit program\n");
       exit(0);
       break;
         
    default:
      printf("wrong choice entered\n");
      break;
  }
 
 }
}   
