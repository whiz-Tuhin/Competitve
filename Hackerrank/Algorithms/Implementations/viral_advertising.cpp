#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>

using namespace std;

int main( ){

  int n,day = 1;
  cin>>n;

  int m = 5,like = 0;
  while (day <= n){
        int recvd = m;
        like = like + floor(recvd/2);
        day++;
        m = 3*(floor(m/2));
  }

  cout<<like;

  return 0;
}
