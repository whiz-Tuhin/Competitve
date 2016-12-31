#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

int main(){

  int n;
  cin>>n;
  vector<int> arr(n);

  for(int i = 0;i < n;i++)
               cin>>arr[i];

  sort(arr.begin(),arr.end());

  int sum = arr[0];
  for(int i = 1;i < n;i++){
              sum = sum^arr[i];
  }
  cout<<sum<<endl;


  return 0;
}
