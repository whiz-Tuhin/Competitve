#include <iostream>
#include <math.h>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int main( ){

  int t,n;

  cin>>t;

  while(t > 0){

          cin>>n;
          vector<int> a(n);
          vector<int> b(n);
          for(int i = 0;i < n;i++){
                       cin>>a[i];
                      // b[i] = a[i];
          }

          //sort(b.begin(),b.end());

          if(n == 3){
                cout<<"YES"<<endl;
          }
          else{
                int flag = 0;
                for(int i = 0;i < 3;i++){
                             if(a[i] > a[i+1]){
                                    flag = 1;
                                    break;
                             }
                }

                if(flag == 1){
                      cout<<"YES"<<endl;
                }
                else{
                      cout<<"NO"<<endl;
                }
          }

          t--;

  }




  return 0;
}
