#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main( ){

  int s,t,a,b,m,n;

  cin>>s>>t;
  cin>>a>>b;
  cin>>m>>n;

  vector<int> apple(m);
  vector<int> orange(n);

  int count_a = 0;
  int count_o = 0;

  for(int i = 0;i < m;i++){
               cin>>apple[i];

               if(s<=apple[i] + a && apple[i]+a <= t)
                        count_a++;
  }
  for(int j = 0;j < n;j++){
               cin>>orange[j];

               if(s<=orange[j] + b && orange[j]+b <= t)
                       count_o++;
  }

  cout<<count_a<<endl;
  cout<<count_o<<endl;

  return 0;
}
