/*Complexity
  Time : O(n)
  Space: O(1)
*/

//Method Used is using array elements as indices
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;



void find_duplicates(int n,int arr[]){

   for(int i = 0;i < n;i++){

                if(arr[abs(arr[i])] > 0){
                      arr[abs(arr[i])] *= -1;
                }
                else{
                      cout<<abs(arr[i])<<" ";
                }
   }


}
int main(){

  int n;
  cin>>n;

  int arr[n];

  for(int i = 0;i < n;i++){
               cin>>arr[i];
  }

  find_duplicates(n,arr);

  return 0;
}
