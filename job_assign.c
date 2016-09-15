#include <stdio.h>
#include <stdlib.h>
 
int n1;
int count = 0;
void swap(int a[ ],int x, int y)
{
    int temp;
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void permute(int arr1[],int l,int r,int temp_arr[ ][20],int max)  //max and n are the index limis for the temp_Arr
{
   int i,j=0,k;
   if (l == r)    //when the swapping is complete store into the temp_Arr
   {
      for(k=0;k<r;k++)
      {
        temp_arr[count][k] = arr1[k];    
      }
      count++;
   }    
   else
   {
       for (i = l; i < r; i++)
       {
          swap(arr1,l,i);
          permute(arr1,l+1,r,temp_arr,max);
          swap(arr1,l,i); 
       }  
   }
  
}

int factorial(int n)
{
  int fact=1;
  while(n>=1)
  {
    fact = fact*n;
    n--;
  }
 return fact;
}                                        

int main( )
{
  int job,temp1,var=0,i,j,min=10000,sum=0,k;
  printf("enter the number of jobs\n");  // the row = col
  scanf("%d",&job);
  int n = job;
  int arr1[job];
  int main_array[job][job];  //declaring the main array   
  //taking input for the array
  printf("enter the cost matrix input values\n");
  for(i = 0;i<job;i++)
  {
     for(j=0;j<job;j++)
     {
        scanf("%d",&main_array[i][j]);
     }
  }
  
  for(i = 0;i<job;i++)
       arr1[i] = i;
    
  int max = factorial(n);
  int temp_arr[max][20];
  
  permute(arr1,0,job,temp_arr,max);
  
  for(i = 0;i<max;i++)  
  {
    for(j = 0;j<n;j++)
    {
       printf("%d ",temp_arr[i][j]);
    }
   printf("\n");
 }
  //mapping it to the main array//
  
  int mark = 0;
  for(i = 0;i<max;i++)
  {
    int m = 0;
     for(j = 0;j<n;j++)
     {
       m = temp_arr[i][j];
       sum = sum + main_array[j][m];

     }    
      if(sum<min)
      {
      	  mark = i;
      	  //printf("%d\n",mark);
          min = sum;
      }
    sum = 0;
  }

  printf("\n");
  for(j = 0;j<n;j++)
  {
  	 	printf("the person %d has got job %d with cost %d",j,temp_arr[mark][j],main_array[j][temp_arr[mark][j]]);
  	 	printf("\n");
  }
  printf("\n");
  printf("the minimum cost for the assignment is %d \n ",min);
  
  return 0;
}
