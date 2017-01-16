//KADANE's Algorithm for largest sum contiguos subarray
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int largest_sum_contg_subarr(int n,int arr[]){

      int max_1 = 0,max_2 = 0;

      for(int i = 0;i < n;i++){

                  max_1 += arr[i];
                   if(max_1 < 0)
                          max_1 = 0;
                   if(max_2 < max_1){
                          //cout<<"*"<<endl;
                          max_2 = max_1;
                   }
      }

      return max_2;
}


int main(){

      int n = 0;
      cin>>n;

      int arr[n];

      for(int i = 0;i < n;i++)
                   cin>>arr[i];

      int res = largest_sum_contg_subarr(n,arr);
      cout<<"Largest Sum in a contg Subaaray is = "<<res<<endl;
      return 0;
}
