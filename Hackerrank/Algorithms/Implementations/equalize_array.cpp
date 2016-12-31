#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main( ){

  int n;
  cin>>n;
  vector<int>vec(n);

  for(int i = 0;i < n;i++)
               cin>>vec[i];

  sort(vec.begin(),vec.end());

  int count = 0,max;
  for(int i = 0;i < n;i++){
               count = 0;
               for(int j = 0;j < n;j++){
                            if(vec[i] == vec[j]){
                                      count++;
                            }
               }

               if(count > max){
                      max = count;
               }
  }

  cout<<(n - max);


  return 0;
}
