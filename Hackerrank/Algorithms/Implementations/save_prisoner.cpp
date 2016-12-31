#include <iostream>
#include <cstdlib>
#include <math.h>
// #include <ctypes.h>
#include <climits>

using namespace std;

int main( ){

  int t;
  cin>>t;
  unsigned long long int n,m,s;

  for (int i = 0; i < t; i++) {
            cin >> n >> m >> s;
            if(!((m+s-1)%n))cout << n << endl;
            else cout << (m+s-1)%n << endl;
  }


  return 0;
}
