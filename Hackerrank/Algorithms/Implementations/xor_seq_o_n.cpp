#include <iostream>
#include <math.h>

using namespace std;

long long function_xor(long long a){

    int temp = a%8;

    if(temp == 0 || temp == 1){
          return a;
    }
    if(temp == 2 || temp == 3){
          return 2;
    }
    if(temp == 4 || temp == 5){
          return a+2;
    }
    if(temp == 6 || temp == 7){
          return 0;
    }

    return 0;

}

int main( ){

      long long t;
      cin>>t;
      long long l,r;

      for(int i = 0;i < t;i++){
                   cin>>l>>r;

                   long long ans = (function_xor(r))^(function_xor(l-1));
                   cout<<ans<<endl;
      }

      return 0;

}
