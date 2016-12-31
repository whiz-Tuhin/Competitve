#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* link;
}NODE;

void print_list(NODE* head)  // function to print list
{
	NODE* current = head;
	while(current!=NULL)
	{
		printf("%d->",current->data);  // a blank (-> denotes) grounded
		current = current->link;
	}

	printf("\n");
}
void append_end(NODE** head_ref,int new_data)  // function to append node at the end
{
	NODE* temp  =  (NODE*)malloc(sizeof(NODE));
	 NODE* ptr =  *head_ref;
    temp->data = new_data;

    temp->link = NULL;

    if((*head_ref) == NULL)
    {
    	(*head_ref) = temp;
    	return;
    }

    while(ptr->link!=NULL)
    {
      ptr = ptr->link;
    } 

    ptr->link  =  temp;

    return;
}

NODE* append_start(NODE** head_ref,int new_data)  // appending node at the start
{
   NODE* temp  = (NODE*)malloc(sizeof(NODE));
   temp->data =  new_data;

   if((*head_ref)==NULL)
   {
      printf("Can't insert from start dude....sorry");
      return *head_ref;
   }
  
   temp->link = *head_ref;
   *head_ref =  temp;

   return *head_ref;
}

void append_after(NODE* prev,int new_data)    // function to append node after a given node
{
   NODE* next =  prev->link;
   NODE* temp = (NODE*)malloc(sizeof(NODE));

   temp->data = new_data;

   if(prev == NULL)
   {
   	printf("the list doesnt exist dude!!");
   	return;
   }
   
   temp->link  = next;
   prev->link  =  temp;

  return;
}

NODE* delete_key(NODE* head,int key)
{
	NODE* temp = head;
	NODE* prev;
    
    if(temp!=NULL && temp->data == key)  // if head is the key
    {
       head = temp->link;
       free(temp);
       return head;
    }

    while(temp!=NULL && temp->data!=key) 
    {
    	prev = temp;
    	temp =  temp->link;
    }

    if(temp==NULL)   //if key not present in the linked list
    	return head;

    prev->link = temp->link;  // connect the things
    free(temp);

    return head;
}

NODE* delete_pos(NODE* head,int pos)  //function to delete key with the position
{
  int ctr =0;	
  NODE* temp  = NULL;
	
	if(pos==0)
	{
       temp  = head;
       head  = head->link;
       free(temp);
	}

  temp = head;

  for(ctr = 0; ctr < pos-1 && temp!=NULL;ctr++)
  {
  	 temp  = temp->link;
  }

  NODE* temp2 = temp->link;

  temp->link = temp2->link;

  free(temp2);

  return head; 	
}

int count_length_iterative(NODE* head)
{
  int count = 0;

  if(head==NULL)
  {
    printf("the list doesnt exist..append some items\n");
    return 0;
  }

  NODE* current  = head; 

  while(current!=NULL)
  {
    count++;
    current = current->link;
  }

  return count;
}

int count_length_recursive(NODE* head)
{
 
  NODE* current =  head;

  if(current==NULL)
  {
    printf("the list doesnt exist..append some items\n");
    return 0;
  }

  else 
    return  1 + count_length_recursive(current->link);
}

bool search_ele(NODE* head,int ele)
{
   NODE* current = head; 
   while(current!=NULL)
   {
     if(current->data == ele)
     {
       return true;
     }
     else 
       current = current->link;
   }

   printf("element not found\n");

   return false;

}

int main()
{
	NODE* head = NULL;// start with an empty list 
	int choice,choice2;
	int data =0,key =0,pos =0,j=0,i,ele;


    
   while(1)
   {
     printf("choose amongst the following operations\n");
     printf("1.)append_end\n2.)append_start\n3.)append_after\n4.)delete_key\n5.)delete_pos\n6.)print_list\n7.)Exit Program\n");
     printf("8.)count_length\n9.)Search element\n");

     scanf("%d",&choice);

     switch(choice)
     {
     	case 1:
     	   printf("enter the data you want to append at the end\n"); 
     	   scanf("%d",&data);
     	   append_end(&head,data);
     	   printf("\n");
     	   break;
     	case 2:
     	   printf("enter the data you want to append at the start\n");
     	   scanf("%d",&data);
     	   append_start(&head,data);
     	   printf("\n");
     	   break;
     	case 3:
     	   printf("enter the data you want to append after\n");
     	   scanf("%d",&data);
     	   printf("enter the position after which you want to append\n");
     	   scanf("%d",&pos);
     	   NODE* temp = head;
     	   for(j = 0;j<pos;j++)
             temp = temp->link;
     	   append_after(temp,data);
     	   break;

     	case 4:
     	   printf("enter the key which you want to delete\n");
     	   scanf("%d",&key);
     	   delete_key(head,key);
     	   printf("\n");
     	   break;

     	case 5:
           printf("enter position you want to delete\n");
           scanf("%d",&pos);
           delete_pos(head,pos);
           printf("\n");
           break;
        case 6:
           printf("The list is :- \n");
           print_list(head);
           break;

        case 7:
           printf("exiting the program now...bye bye :) \n");
           exit(0);
           break;
        
        case 8:
            printf("  1.)recursive\n 2.)iterative\n");
            scanf("%d",&choice2);
            switch(choice2)
            {
              case 1:
                 printf("\nthe length of the list is:- %d\n",count_length_recursive(head));
                 break;

              case 2:
                 printf("\nthe length of the list is- %d\n",count_length_iterative(head));
                 break;

              default:
                 printf("wrong choice\n"); 
                 break;
            }
            break; 

         case 9:
            printf("enter the element to search\n");
            scanf("%d",&ele);
            if(search_ele(head,ele))
            {
              printf("\nFOUND!!!!!\n");
            }
            else
              printf("\nNOT FOUND!!!\n");

            break;


        default:
          printf("you have entered a wrong choice\n");
          break;

     }

    } 


    return 0;
}