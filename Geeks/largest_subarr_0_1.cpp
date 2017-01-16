//Find Largest subarray with equal number of 0s n 1s
//Time Complexity : O(n)

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <map>

using namespace std;

void largest_subarray_0_1(int n,int arr[]){

      map<int,int> hash_map;

      for(int i = 0;i < n;i++)
                   arr[i] = (arr[i] == 0)?(-1):(1);

      int sum = 0;
      int len = 0;
      int index = -1;
      for(int i = 0;i < n;i++){
                   sum += arr[i];

                   if(sum == 0){
                        len = i+1;
                        index = i;
                   }

                   if(hash_map.find(sum+n) != hash_map.end()){
                              cout<<"******"<<" i = "<<i<<"******"<<endl;
                              cout<<"Sum = "<<sum<<endl;
                              if(len < i - hash_map[sum+n]){
                                      cout<<"Len = "<<len<<" i - hash_map[sum+n] = "<<i - hash_map[sum+n]<<endl;
                                      len = i - hash_map[sum+n];
                                      index = i;
                              }
                   }

                   else{

                              cout<<"Inserting Sum = "<<sum<<" into hash_map"<<endl;
                              hash_map[sum + n] = i;
                   }
        }

        cout<<(index - len + 1)<<" to "<<index<<endl;
        cout<<len<<endl;

}


int main(){

      int n;
      cin>>n;

      int arr[n];

      for(int i = 0;i < n;i++){
                   cin>>arr[i];
      }

      largest_subarray_0_1(n,arr);

      return 0;
}
