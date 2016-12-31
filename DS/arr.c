#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ************largest coprime in given range*************

/*int check_coprime(int a,int b)
{
int i = 2;
int flag =1;
   if(a > b)
   {
   	 for(i = 2;i<a;i++)
   	 {
   	 	if(a%i==0 && b%i==0)
   	 	{
   	 		flag = 0;
   	 		break;
   	 	}
   	 }
   }
   if(a < b)
   {
   	for(i = 2;i<b;i++)
   	{
   		if(a%i==0 && b%i==0)
   		{
   			flag = 0;
   			break;
   		}
   	}
   }

   return flag;
}

int main()
{
	int x,y,temp1=0,max=0;
	int i = 2;
	printf("Enter the value of x\n");
	scanf("%d",&x);
    while(i>=2 && i<=250)
    { 
    	
    	if(check_coprime(x,i))
    	{
          temp1 = i;           
    	}
    	if(temp1>max)
    		max = temp1;

    	i++;
   
    }

    printf("%d ",max);


    return 0;
}*/

//****************longest palindromic substring**************//

char* longest_palindrome(char arr[],int i,int j,int len)
{

   
}



int main()
{
	char str[100];
	printf("enter the string\n");
	scanf("%s",str);
    int len = strlen(str);
    int i = 0,j =0;

    for(i = 0;i<len;i++)
    {	
    	for(j=0;j<len;j++)
    	{

    	}

            	
    
}






































