#include <iostream>
#include <math.h>
#include <cstdlib>

typedef unsigned long long int ulli;

using namespace std;

int main( ){

      ulli t;
      ulli i = 1;
      cin>>t;

      ulli count = 3;

      while(t > count){
            t = t - count;
            count*= 2;
      }

      cout<<count - t + 1;

      return 0;

}
