#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <functional>

using namespace std;

vector<int> stack;

void nearest_smaller_element(vector<int> &arr){

      for(int i = 0;i < arr.size();i++){

              if(i == 0){
                  stack.push_back(arr[i]);
                  cout<<"Nearest Smallest Element for "<<arr[i]<<" = "<<stack[stack.size() - 1]<<endl;
              }

              else if(arr[i] > stack[stack.size()-1]){
                  cout<<"Nearest Smallest Element for "<<arr[i]<<" = "<<stack[stack.size() - 1]<<endl;
                  stack.push_back(arr[i]);
              }
              else{
                  while(stack[stack.size()-1] >= arr[i]){
                        stack.pop_back();
                  }
                  if(stack.size() == 0){
                        cout<<"Nearest Smallest Element for "<<arr[i]<<" does not exist "<<endl;
                        continue;
                  }
                  cout<<"Nearest Smallest Element for "<<arr[i]<<" = "<<stack[stack.size() - 1]<<endl;
                  stack.push_back(arr[i]);

              }


      }
}

int main(){

      ios_base::sync_with_stdio(false);

      int n;
      cin>>n;

      vector<int> arr(n);

      for(int i = 0;i < n;i++){
            cin>>arr[i];
      }

      nearest_smaller_element(arr);

      return 0;
}
