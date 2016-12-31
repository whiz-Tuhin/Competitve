#include <iostream>
#include <algorithm>
#include <cstring>

void findnext(char digits[],int n)
{
   int i =0;
   for(i = n-1;i>=0;i--)
   {
   	if(digits[i]>digits[i-1])      //checking for an index where a[i-1] < a[i]
   		break;
   }
   
   if(i==0)
   {                  //if number is in ascending order
   	cout<<"not possible";
    return;
   }
   
   int x = digits[i-1];
   min = i;

   for(j = n-1;j>i;j--)
   {
      if(digits[j] < digits[min] && digits[j] > x)
      	 min =j; 
   }

   swap(digits[i-1],digits[min]);

   sort()



}
int main()
{
	char number[] = "567939";
	int n = sizeof(number)/sizeof(number[0]);
	findnext(number,n)
    return 0;
}
