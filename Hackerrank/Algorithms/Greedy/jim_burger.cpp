#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct s{
  int sum,index;
}S;

bool myfunc(S a,S b){
  if (a.sum == b.sum){
        return a.index < b.index;
  }
  else{
        return a.sum < b.sum;
  }
}

int main( ){

  int n;
  cin>>n;

  vector<S> a(n);

  int t,d;
  for(int i = 0;i < n;i++){
              cin>>t>>d;
              a[i].sum = t+d;
              a[i].index = i+1;
  }

  sort(a.begin(),a.end(),&myfunc);

  for(int i = 0;i < n;i++){
               cout<<a[i].index<<" ";
  }


  return 0;
}
