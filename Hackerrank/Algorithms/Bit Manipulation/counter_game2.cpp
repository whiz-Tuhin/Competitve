#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

typedef unsigned long long int ulli;

int main(){

  ulli n;
  int t;
  cin>>t;

while(t > 0){
  cin>>n;

  ulli temp = n-1;
  int count = 0;
  while(temp){

      temp &= temp-1;
      count++;
  }

  string str = (count & 1)?"Louise":"Richard";
  cout<<str<<endl;

  t--;
}
  return 0;
}
