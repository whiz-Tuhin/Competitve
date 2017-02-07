#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  vector<int> w(n);

  for(int i = 0;i < n;i++)
               cin>>w[i];

  sort(w.begin(),w.end());

  int i = 0,cost = 0;

  while(i < n){
          int temp = w[i];
          i+=1;
          while((temp<=w[i] && w[i]<=temp+4) && (i<n)){
                      i++;
          }
          cost++;
  }

  cout<<cost<<endl;
}
