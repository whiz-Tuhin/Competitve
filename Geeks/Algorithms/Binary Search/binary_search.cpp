#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main(){

      //enter sorted array;

      int n;
      cin>>n;
      vector<int> arr(n);

      for(int i = 0;i < n;i++){
          cin>>arr[i];
      }

      int x;
      cin>>x;

      int low = 0;
      int high = n-1;

      int flag = 0;
      while(low <= high){
              int mid = low + (high - low)/2;

              if(arr[mid] == x){
                  cout<<"Found at index "<<mid<<endl;
                  flag = 1;
                  break;
              }
              else if(x < arr[mid]){
                  high = mid-1;
              }
              else{
                  low = mid + 1;
              }
      }

      if(!flag){
          cout<<"Not Found"<<endl;
      }
      return 0;
}
