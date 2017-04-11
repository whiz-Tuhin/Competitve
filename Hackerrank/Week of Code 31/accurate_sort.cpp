#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin>>t;
    while(t-- > 0){
          int n;
          cin>>n;
          vector<int> a(n);

          for(int i = 0;i < n;i++)
                       cin>>a[i];

          for(int i = 0;i < n-1;i++){
                  if(abs(a[i+1] - a[i]) == 1 && a[i] > a[i+1]){
                      int temp = a[i];
                      a[i] = a[i+1];
                      a[i+1] = temp;
                  }
          }

          if(is_sorted(a.begin(),a.end())){
              cout<<"Yes"<<endl;
          }
          else{
              cout<<"No"<<endl;
          }
    }
    return 0;
}
