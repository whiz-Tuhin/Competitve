#include <iostream>
#include <math.h>
#include <vector>


using namespace std;

int main( ){

  int t,n,k;
  cin>>t;

  for(int i = 0;i < t;i++){

        int count = 0;
        cin>>n>>k;
        vector<int> myvec(n);

        for(int j = 0;j < n;j++){
                     cin>>myvec[i];
                     if(myvec[i] <= 0)
                            count++;
        }
        if(count < k){
              cout<<"YES"<<endl;
        }
        else{
              cout<<"NO"<<endl;
        }
  }

  return 0;
}
