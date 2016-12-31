#include <iostream>
#include <math.h>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  vector<int> vec(n);

  for(int i = 0;i < n;i++){
               cin>>vec[i];
  }

  sort(vec.begin(),vec.end());
  // for(int i = 0;i < n;i++)
  //             cout<<vec[i]<<" ";
  //cout<<endl;
  int cnt = 0,k = 0;
  vector<int> count(n,0);
  int temp = 0;
  for(int i = 0;i < n;i++){
               temp = vec[i];
               cnt = 0;
               for(int j = i;j < n;j++){
                        if(temp > 0){
                            vec[j] = vec[j] - temp;
                            cnt++;
                        }
               }

               if(cnt > 0){
                      count[k++] = cnt;
                }
               ///cout<<count<<endl;
  }

  int i = 0;
  while(count[i] != 0 && i < n){
          cout<<count[i]<<endl;
          i++;
  }

  return 0;
}
