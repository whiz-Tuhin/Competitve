#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <bitset>
#include <utility>
#include <set>
#include <list>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;

  while(t--){
        int n;
        vector<int> arr(n);

        for(int i = 0;i < n;i++){
                  cin>>arr[i];
        }

        int start = 0,end = 0;
        int mid = 0;

        while(end < n){
              if(arr[start] == 1){
                    end++;
              }
              if(arr[end] - arr[start] == 1){
                    end++;
              }
              if(arr[end] - start)
              else{
                    start = end;
              }

        }
  }

  return 0;
}
