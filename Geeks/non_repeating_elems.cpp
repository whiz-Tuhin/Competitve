#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

void non_repeating_elems(int n,int arr[]){

      int xr = arr[0];
      for(int i = 1;i < n;i++){
                xr ^= arr[i];
      }

      int set_right_bit = xr & ~(xr - 1); //setting rightmost bit in xor as the 2 different numbers will contribute towards the set bits

      //dividing into 2 sets
      int f = 0,s = 0;
      for(int i = 0;i < n;i++){

                   if(arr[i] & set_right_bit){
                             f = f^arr[i];
                   }
                   else{
                             s = s^arr[i];
                   }
      }

      cout<<f<<" "<<s<<endl;

}


int main(){

  int n;
  cin>>n;

  int arr[n];

  for(int i = 0;i < n;i++)
               cin>>arr[i];

  non_repeating_elems(n,arr);
  //cout<<res<<endl;
  return 0;
}
