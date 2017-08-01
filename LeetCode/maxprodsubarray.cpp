#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int maxprod(vector<int> &arr,int n){

        int max_end = 0;
        int current_max = 1;
        int current_min = 1;

        for(int i = 0;i < n;i++){
              if(arr[i] > 0){
                    current_max = current_max*arr[i];
                    current_min = min(current_min,1);
              }

              else if(arr[i] == 0){
                  current_min = 1;
                  current_max = 1;
              }

              else{
                    int temp = current_max;
                    current_max = max(current_min*arr[i],1);
                    current_min = temp*arr[i];
              }

              if(max_end < current_max){
                max_end = current_max;
              }
        }

        return max_end;
}


int main(){

  int n;
  cin>>n;

  vector<int> arr(n);

  for(int i = 0;i < n;i++){
        cin>>arr[i];
  }


  int res = maxprod(arr,n);
  cout<<res<<endl;

  return 0;
}
