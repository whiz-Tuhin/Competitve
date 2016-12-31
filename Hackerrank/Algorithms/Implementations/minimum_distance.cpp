#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main( ){


  int n;
  cin>>n;

  vector<int> diff;
  vector<int> myvec(n);
  for(int i = 0;i < n;i++){
               cin>>myvec[i];
  }

  for(int i = 0;i < n-1;i++){
               for(int j = i+1;j < n;j++){
                            if(myvec[i] == myvec[j]){
                                    diff.push_back(abs(i - j));
                            }
               }
  }

  int min = 65535;

  for(int i = 0;i < diff.size();i++){
               if(diff[i] < min){
                          min = diff[i];
               }
  }

  if(min == 65535){
          cout<<-1<<endl;
          exit(0);
  }
  cout<<min<<endl;

  return 0;
}
