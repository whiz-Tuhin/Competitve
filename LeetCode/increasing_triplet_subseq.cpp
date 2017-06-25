#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
      vector<int> arr;

      int n;
      cin>>n;

      for(int i = 0;i < n;i++){
            int k;
            cin>>k;
            arr.push_back(k);
      }

      int m = INT_MAX,int b = INT_MAX;
      for(int i = 0;i < n;i++){
              if(arr[i] <= m){
                  m = arr[i];
              }
              else if(arr[i] <= b){
                  b = arr[i];
              }
              else{
                  return true;
              }
      }
      return false;
}
