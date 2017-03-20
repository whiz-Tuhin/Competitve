#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){


      int n,q;
      cin>>n>>q;

      vector<int> a(n);
      for(int i = 0;i < n;i++){
                   cin>>a[i];
      }

      while(q > 0){

        int left,right,x,y;

        cin>>left>>right>>x>>y;

        int count = 0;
        for(int i = left; i<= right;i++){
                       if(a[i]%x == y){
                            count++;
                       }
        }

        cout<<count<<endl;
        q--;
      }

      return 0;
}
