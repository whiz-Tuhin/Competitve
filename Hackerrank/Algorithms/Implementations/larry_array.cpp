#include <iostream>
#include <math.h>
#include <cstdlib>
#include <vector>
#include <algorithm>
//#include <ctypes>

using namespace std;


int is_sorted(vector<int>& v1,vector<int>& v2){

      if(v1 == v2){
              return 1;
      }
      else{
              return 0;
      }
}


int main( ){

  int t,n;

  cin>>t;

  while(t > 0){

          cin>>n;
          vector<int> a(n);
          vector<int> b(n);
          for(int i = 0;i < n;i++){
                       cin>>a[i];
                       b[i] = a[i];
          }

          sort(b.begin(),b.end());

          if(n == 3){
                cout<<"YES"<<endl;
          }
          else{

                for(int i = 0;i <= n-1;i++){

                }



          }


  }




  return 0;
}
